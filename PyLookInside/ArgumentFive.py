# -*- coding: utf8 -*-

"""

Copyright 2006-2009, BeatriX

This file is part of BeaEngine.
 
BeaEngine is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

BeaEngine is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with BeaEngine.  If not, see <http://www.gnu.org/licenses/>.

"""

# Import packages

import wx                            # This module uses the new wx namespac

#---------------------------------------------------------------------------

class My_StaticBox(wx.Panel):
    def __init__(self, parent):
        wx.Panel.__init__(self, parent, -1)

        #-------------------------------------------------------------------
        
        self.parent = parent

        #-------------------------------------------------------------------
        
        fontSize = self.GetFont().GetPointSize()

        # wx.Font(pointSize, family, style, weight, underline, faceName)
        if wx.Platform == "__WXMAC__":
            self.normalFont = wx.Font(fontSize-4,
                                      wx.DEFAULT, wx.NORMAL, wx.NORMAL, False, "")

        elif wx.Platform == "__WXGTK__":
            self.normalFont = wx.Font(fontSize+0,
                                      wx.DEFAULT, wx.NORMAL, wx.NORMAL, False, "")
              
        else:
            self.normalFont = wx.Font(fontSize+0,
                                      wx.DEFAULT, wx.NORMAL, wx.NORMAL, False, "")
         
        self.SetFont(self.normalFont)

        #-------------------------------------------------------------------

        box = wx.StaticBox(self, -1, u"Argument n°5 :")
        box.SetForegroundColour("#0074ff")
        bsizer1 = wx.StaticBoxSizer(box, wx.VERTICAL)
        
        texte1 = wx.StaticText(self, -1, "Arg. Type = NO_ARGUMENT")
        texte1.SetFont(self.normalFont)
        bsizer1.Add(texte1, 1, wx.ALL|wx.EXPAND, 0)
        
        texte1 = wx.StaticText(self, -1, "Arg. Mnemonic = -",
                               style=wx.ALIGN_LEFT)
        texte1.SetFont(self.normalFont) 
        bsizer1.Add(texte1, 1, wx.ALL|wx.EXPAND, 0)
        
        texte1 = wx.StaticText(self, -1, "Arg. Size = 00000000",
                               style=wx.ALIGN_LEFT)
        texte1.SetFont(self.normalFont) 
        bsizer1.Add(texte1, 1, wx.ALL|wx.EXPAND, 0)    

        # Add a space
        bsizer1.AddStretchSpacer()
 
        #-------------------------------------------------------------------
        #-------------------------------------------------------------------

        sizer = wx.BoxSizer(wx.HORIZONTAL)
        sizer.Add(bsizer1, 1, wx.EXPAND | wx.ALL, 0)

        #----------
        
        topSizer = wx.BoxSizer(wx.VERTICAL)
        topSizer.Add(sizer, 0, wx.EXPAND | wx.ALL, 0)
        
        #----------
        
        self.SetSizer(topSizer)
        topSizer.Fit(self)

        