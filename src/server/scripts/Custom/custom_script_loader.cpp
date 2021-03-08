/*
 * This file is part of the TrinityCore Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

// This is where scripts' loading functions should be declared:
void AddSC_NPC_TransmogDisplayVendor();
void AddLfgSoloScripts();
void AddSC_CrossfactionBattlegrounds();
void AddSC_skip_StarterArea();
void AddSC_GOMove_commandscript();
void AddSC_item_level80();
void AddSC_item_level255();

// The name of this function should match:
// void Add${NameOfDirectory}Scripts()
void AddCustomScripts()
{
    AddSC_item_level80();
    AddSC_item_level255();
    AddSC_NPC_TransmogDisplayVendor();
    AddLfgSoloScripts();
    AddSC_CrossfactionBattlegrounds();
    AddSC_skip_StarterArea();
    AddSC_GOMove_commandscript();
}
