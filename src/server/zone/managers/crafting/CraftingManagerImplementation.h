/*
 Copyright (C) 2007 <SWGEmu>
 
 This File is part of Core3.
 
 This program is free software; you can redistribute 
 it and/or modify it under the terms of the GNU Lesser 
 General Public License as published by the Free Software
 Foundation; either version 2 of the License, 
 or (at your option) any later version.
 
 This program is distributed in the hope that it will be useful, 
 but WITHOUT ANY WARRANTY; without even the implied warranty of 
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
 See the GNU Lesser General Public License for
 more details.
 
 You should have received a copy of the GNU Lesser General 
 Public License along with this program; if not, write to
 the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 
 Linking Engine3 statically or dynamically with other modules 
 is making a combined work based on Engine3. 
 Thus, the terms and conditions of the GNU Lesser General Public License 
 cover the whole combination.
 
 In addition, as a special exception, the copyright holders of Engine3 
 give you permission to combine Engine3 program with free software 
 programs or libraries that are released under the GNU LGPL and with 
 code included in the standard release of Core3 under the GNU LGPL 
 license (or modified versions of such code, with unchanged license). 
 You may copy and distribute such a system following the terms of the 
 GNU LGPL for Engine3 and the licenses of the other code concerned, 
 provided that you include the source code of that other code when 
 and as the GNU LGPL requires distribution of source code.
 
 Note that people who make modified versions of Engine3 are not obligated 
 to grant this special exception for their modified versions; 
 it is their choice whether to do so. The GNU Lesser General Public License 
 gives permission to release a modified version without this exception; 
 this exception also makes it possible to release a modified version 
 which carries forward this exception.
 */

#ifndef CRAFTINGMANAGERIMPLEMENTATION_H_
#define CRAFTINGMANAGERIMPLEMENTATION_H_

#include "engine/engine.h"

#include "../../../db/ServerDatabase.h"

#include "../../Zone.h"
#include "../../ZoneServer.h"
#include "../../ZoneProcessServerImplementation.h"

#include "CraftingManager.h"

#include "../../objects/draftschematic/DraftSchematic.h"
#include "../../objects/draftschematic/DraftSchematicImplementation.h"
#include "../../objects/draftschematic/DraftSchematicGroup.h"
#include "../../objects/draftschematic/DraftSchematicGroupImplementation.h"

#include "../../objects.h"

#include "../../packets.h"

#include "events/CreateObjectEvent.h"

class ZoneServer;

class CraftingManagerImplementation : public CraftingManagerServant,
	public Mutex {
	ZoneServer* server;
	ZoneProcessServerImplementation * processor;

	CreateObjectEvent * createObjectEvent;

	// Use a groupName to recieve a vector of draftSchematics back
	VectorMap<string, DraftSchematicGroup*> draftSchematicsMap;

public:
	CraftingManagerImplementation(ZoneServer* serv, ZoneProcessServerImplementation* proc);
	
	void loadDraftSchematicsFromDatabase();
	DraftSchematic* loadDraftSchematic(ResultSet* result);
	Vector<string> parseStringsFromString(const string& unparsedStrings);
	Vector<uint32> parseUnsignedInt32sFromString(const string& unparsedInts);

	// Crafting Methods
	void prepareCraftingSession(Player* player, CraftingTool * ct, DraftSchematic* ds);
	void createDraftSchematic(Player* player, CraftingTool * ct);
	void createTangibleObject(Player* player, CraftingTool * ct);
	void setupIngredients(Player* player, CraftingTool * ct);
	void addResourceToCraft(Player * player, ResourceContainer * rcno, int slot, int counter);
	void removeResourceFromCraft(Player * player, uint64 resID, int slot, int counter);
	void nextCraftingStage(Player * player, string test);
	void createPrototype(Player * player, string test);
	void assembleWithoutExperimenting(Player * player, CraftingTool * ct, DraftSchematic * ds, int counter);
	void craftingCustomization(Player * player, string name, int condition);
	void finishStage1(Player * player, int counter);
	void finishStage2(Player * player, int counter);
	void createObjectInInventory(Player * player, int timer);

	TangibleObject * generateTangibleObject(Player * player, DraftSchematic * ds);

	void addDraftSchematicsFromGroupName(Player* player, const string& schematicGroupName);
	void subtractDraftSchematicsFromGroupName(Player* player, const string& schematicGroupName);
};

#endif /*CRAFTINGMANAGERIMPLEMENTATION_H_*/
