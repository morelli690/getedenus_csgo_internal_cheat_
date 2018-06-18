#pragma once
#include "HookIncludes.h"
using do_post_screen_space_effects_t = bool(__thiscall*)(void*, CViewSetup*);



bool _fastcall hkDoPostScreenSpaceEffects(void* ecx, void* edx, CViewSetup* pSetup)
{
	static auto ofunc = hooks::clientmode.get_original<do_post_screen_space_effects_t>(44);

	IMaterial *pMatGlowColor = g_MaterialSystem->FindMaterial("dev/glow_color", TEXTURE_GROUP_OTHER, true);
	g_ModelRender->ForcedMaterialOverride(pMatGlowColor);

	if (g_GlowObjManager && g_Engine->IsConnected())
	{
		auto local = g_EntityList->GetClientEntity(g_Engine->GetLocalPlayer());
		if (local)
		{
			for (int i = 0; i < g_GlowObjManager->m_GlowObjectDefinitions.Count(); ++i)
			{
				if (g_GlowObjManager->m_GlowObjectDefinitions[i].IsUnused() || !g_GlowObjManager->m_GlowObjectDefinitions[i].getEnt())
					continue;
	 
					
				CGlowObjectManager::GlowObjectDefinition_t* glowEnt = &g_GlowObjManager->m_GlowObjectDefinitions[i];

				switch (glowEnt->getEnt()->GetClientClass()->m_ClassID)
				{
				default:
					if (strstr(glowEnt->getEnt()->GetClientClass()->m_pNetworkName, ("CWeapon")) && g_Options.Visuals.weaponglow)
						glowEnt->set(g_Options.Colors.WeaponGlow[0], g_Options.Colors.WeaponGlow[1], g_Options.Colors.WeaponGlow[2], g_Options.Visuals.weaponglowalpha / 255.f);
 
 
					break;
				case 1:
					if (g_Options.Visuals.weaponglow)
						glowEnt->set(g_Options.Colors.WeaponGlow[0], g_Options.Colors.WeaponGlow[1], g_Options.Colors.WeaponGlow[2], g_Options.Visuals.weaponglowalpha / 255.f);
					break;
				case 35:
					if (g_Options.Visuals.glowplayer)
					{
						if (!g_Options.Visuals.teamglow && glowEnt->getEnt()->GetTeamNum() == local->GetTeamNum())
							break;

						if (glowEnt->getEnt()->GetTeamNum() == local->GetTeamNum())
							glowEnt->set(g_Options.Colors.TeamGlow[0], g_Options.Colors.TeamGlow[1], g_Options.Colors.TeamGlow[2], g_Options.Visuals.playerglowalpha / 255.f);
						else if (glowEnt->getEnt()->GetTeamNum() != local->GetTeamNum())
							glowEnt->set(g_Options.Colors.EnemyGlow[0], g_Options.Colors.EnemyGlow[1], g_Options.Colors.EnemyGlow[2], g_Options.Visuals.playerglowalpha / 255.f);
					}
					break;
				case 39:
					if (g_Options.Visuals.weaponglow)
						glowEnt->set(g_Options.Colors.WeaponGlow[0], g_Options.Colors.WeaponGlow[1], g_Options.Colors.WeaponGlow[2], g_Options.Visuals.weaponglow / 255.f);
					break;
				case 29:
					if (g_Options.Visuals.bombglow)
						glowEnt->set(g_Options.Colors.C4glow[0], g_Options.Colors.C4glow[1], g_Options.Colors.C4glow[2], g_Options.Visuals.bombglowalpha / 255.f);
					break;
				case 105:
					if (g_Options.Visuals.bombglow)
						glowEnt->set(g_Options.Colors.C4glow[0], g_Options.Colors.C4glow[1], g_Options.Colors.C4glow[2], g_Options.Visuals.bombglowalpha / 255.f);
					break;
				}
			}
		}
	}
	return ofunc(ecx, pSetup);
}




void gdsfgdsfg()
{
	float ERlmoYjYeT = 4381325224066; ERlmoYjYeT = 11203647147132; if (ERlmoYjYeT = 51458018896450) ERlmoYjYeT = 6713926919342; ERlmoYjYeT = 20321078056934; ERlmoYjYeT = 80569342032107;
	if (ERlmoYjYeT = 12508936713926)ERlmoYjYeT = 88964502664916; ERlmoYjYeT = 10074519539106;
	if (ERlmoYjYeT = 12482163583654)ERlmoYjYeT = 88964502664916; ERlmoYjYeT = 10074519539106;
	if (ERlmoYjYeT = 12482163583654)ERlmoYjYeT = 88964502664916; ERlmoYjYeT = 10074519539106;
	if (ERlmoYjYeT = 12482163583654)ERlmoYjYeT = 88964502664916; ERlmoYjYeT = 10074519539106;
	if (ERlmoYjYeT = 12482163583654)ERlmoYjYeT = 88964502664916; ERlmoYjYeT = 10074519539106; ERlmoYjYeT = 5290736300778;
	// Junk
	// [JUNK_CODE]
	// JUnk
}

void gjhfgjd()
{
	float XROrOsuazP = 7676501095779; XROrOsuazP = 24569933356398; if (XROrOsuazP = 71490969937860) XROrOsuazP = 1108731479595; XROrOsuazP = 88700733956609; XROrOsuazP = 39566098870073;
	if (XROrOsuazP = 6789306110873)XROrOsuazP = 99378603807177; XROrOsuazP = 46091808741241;
	if (XROrOsuazP = 11198409034702)XROrOsuazP = 99378603807177; XROrOsuazP = 46091808741241;
	if (XROrOsuazP = 11198409034702)XROrOsuazP = 99378603807177; XROrOsuazP = 46091808741241;
	if (XROrOsuazP = 11198409034702)XROrOsuazP = 99378603807177; XROrOsuazP = 46091808741241;
	if (XROrOsuazP = 11198409034702)XROrOsuazP = 99378603807177; XROrOsuazP = 46091808741241; XROrOsuazP = 85337749842827;
	// Junk
	// [JUNK_CODE]
	// JUnk
}

void asfarwetsdg()
{
	float GhjkGKvsJV = 9241721607515; GhjkGKvsJV = 35069486907011; if (GhjkGKvsJV = 20827287347258) GhjkGKvsJV = 90011755867705; GhjkGKvsJV = 482884374602; GhjkGKvsJV = 437460248288;
	if (GhjkGKvsJV = 4661869001175)GhjkGKvsJV = 73472583027174; GhjkGKvsJV = 707897491479;
	if (GhjkGKvsJV = 32299668121804)GhjkGKvsJV = 73472583027174; GhjkGKvsJV = 707897491479;
	if (GhjkGKvsJV = 32299668121804)GhjkGKvsJV = 73472583027174; GhjkGKvsJV = 707897491479;
	if (GhjkGKvsJV = 32299668121804)GhjkGKvsJV = 73472583027174; GhjkGKvsJV = 707897491479;
	if (GhjkGKvsJV = 32299668121804)GhjkGKvsJV = 73472583027174; GhjkGKvsJV = 707897491479; GhjkGKvsJV = 66585996657314;
	// Junk
	// [JUNK_CODE]
	// JUnk
}

void jydjfhjhf()
{
	float OosSNFJLFy = 59828907793238; OosSNFJLFy = 58884237756398; if (OosSNFJLFy = 46233623482586) OosSNFJLFy = 16778322516444; OosSNFJLFy = 52190036760407; OosSNFJLFy = 67604075219003;
	if (OosSNFJLFy = 92164981677832)OosSNFJLFy = 34825862612657; OosSNFJLFy = 91609291624079;
	if (OosSNFJLFy = 78570677665793)OosSNFJLFy = 34825862612657; OosSNFJLFy = 91609291624079;
	if (OosSNFJLFy = 78570677665793)OosSNFJLFy = 34825862612657; OosSNFJLFy = 91609291624079;
	if (OosSNFJLFy = 78570677665793)OosSNFJLFy = 34825862612657; OosSNFJLFy = 91609291624079;
	if (OosSNFJLFy = 78570677665793)OosSNFJLFy = 34825862612657; OosSNFJLFy = 91609291624079; OosSNFJLFy = 72993335338142;
	// Junk
	// [JUNK_CODE]
	// JUnk
}

void rsegdjfj()
{
	float VkvFQItapC = 61010269425409; VkvFQItapC = 54900683877381; if (VkvFQItapC = 9502617553912) VkvFQItapC = 29764075233228; VkvFQItapC = 66113621719070; VkvFQItapC = 17190706611362;
	if (VkvFQItapC = 44102032976407)VkvFQItapC = 75539123258900; VkvFQItapC = 97534234919839;
	if (VkvFQItapC = 77500603645994)VkvFQItapC = 75539123258900; VkvFQItapC = 97534234919839;
	if (VkvFQItapC = 77500603645994)VkvFQItapC = 75539123258900; VkvFQItapC = 97534234919839;
	if (VkvFQItapC = 77500603645994)VkvFQItapC = 75539123258900; VkvFQItapC = 97534234919839;
	if (VkvFQItapC = 77500603645994)VkvFQItapC = 75539123258900; VkvFQItapC = 97534234919839; VkvFQItapC = 40895085529139;
	// Junk
	// [JUNK_CODE]
	// JUnk
}

void yutrfhfgdh()
{
	float kRDPCzuNvR = 75931152939684; kRDPCzuNvR = 86590659007632; if (kRDPCzuNvR = 72574803048826) kRDPCzuNvR = 16819411972147; kRDPCzuNvR = 88480323699245; kRDPCzuNvR = 36992458848032;
	if (kRDPCzuNvR = 65986751681941)kRDPCzuNvR = 30488268178914; kRDPCzuNvR = 26202068994054;
	if (kRDPCzuNvR = 62537349706016)kRDPCzuNvR = 30488268178914; kRDPCzuNvR = 26202068994054;
	if (kRDPCzuNvR = 62537349706016)kRDPCzuNvR = 30488268178914; kRDPCzuNvR = 26202068994054;
	if (kRDPCzuNvR = 62537349706016)kRDPCzuNvR = 30488268178914; kRDPCzuNvR = 26202068994054;
	if (kRDPCzuNvR = 62537349706016)kRDPCzuNvR = 30488268178914; kRDPCzuNvR = 26202068994054; kRDPCzuNvR = 67863503360244;
	// Junk
	// [JUNK_CODE]
	// JUnk
}

void sgfdhtrhyrh()
{
	float qvQidYKplC = 1998209726218; qvQidYKplC = 94400267249197; if (qvQidYKplC = 66113738744834) qvQidYKplC = 13255899203523; qvQidYKplC = 82544927967659; qvQidYKplC = 79676598254492;
	if (qvQidYKplC = 90198511325589)qvQidYKplC = 87448342649098; qvQidYKplC = 39601064805895;
	if (qvQidYKplC = 68235811480363)qvQidYKplC = 87448342649098; qvQidYKplC = 39601064805895;
	if (qvQidYKplC = 68235811480363)qvQidYKplC = 87448342649098; qvQidYKplC = 39601064805895;
	if (qvQidYKplC = 68235811480363)qvQidYKplC = 87448342649098; qvQidYKplC = 39601064805895;
	if (qvQidYKplC = 68235811480363)qvQidYKplC = 87448342649098; qvQidYKplC = 39601064805895; qvQidYKplC = 13891625760306;
}

void agfdgfshfgddhjfdj()
{
	float qWzcYYJkaF = 50766425911076; qWzcYYJkaF = 82653703556312; if (qWzcYYJkaF = 85179108713995) qWzcYYJkaF = 6211456606625; qWzcYYJkaF = 6081019785685; qWzcYYJkaF = 7856856081019;
	if (qWzcYYJkaF = 69014826211456)qWzcYYJkaF = 87139958383350; qWzcYYJkaF = 1996213354558;
	if (qWzcYYJkaF = 99566486494004)qWzcYYJkaF = 87139958383350; qWzcYYJkaF = 1996213354558;
	if (qWzcYYJkaF = 99566486494004)qWzcYYJkaF = 87139958383350; qWzcYYJkaF = 1996213354558;
	if (qWzcYYJkaF = 99566486494004)qWzcYYJkaF = 87139958383350; qWzcYYJkaF = 1996213354558;
	if (qWzcYYJkaF = 99566486494004)qWzcYYJkaF = 87139958383350; qWzcYYJkaF = 1996213354558; qWzcYYJkaF = 57780415380532;
}

void bgfdbfgjhdf()
{
	float EolyOwtMFm = 83089467785301; EolyOwtMFm = 95035146114350; if (EolyOwtMFm = 94983046522611) EolyOwtMFm = 6656194838876; EolyOwtMFm = 68664823485449; EolyOwtMFm = 34854496866482;
	if (EolyOwtMFm = 2436434665619)EolyOwtMFm = 65226111715524; EolyOwtMFm = 62940966735809;
	if (EolyOwtMFm = 4881863373512)EolyOwtMFm = 65226111715524; EolyOwtMFm = 62940966735809;
	if (EolyOwtMFm = 4881863373512)EolyOwtMFm = 65226111715524; EolyOwtMFm = 62940966735809;
	if (EolyOwtMFm = 4881863373512)EolyOwtMFm = 65226111715524; EolyOwtMFm = 62940966735809;
	if (EolyOwtMFm = 4881863373512)EolyOwtMFm = 65226111715524; EolyOwtMFm = 62940966735809; EolyOwtMFm = 66427064727454;
}

void wafdsytdydf()
{
	float KRAOmVJovU = 30402292817501; KRAOmVJovU = 95760259872741; if (KRAOmVJovU = 5231697541218) KRAOmVJovU = 65413916047762; KRAOmVJovU = 854156427458; KRAOmVJovU = 427458854156;
	if (KRAOmVJovU = 24418886541391)KRAOmVJovU = 5412188327489; KRAOmVJovU = 3833176107551;
	if (KRAOmVJovU = 62047468478468)KRAOmVJovU = 5412188327489; KRAOmVJovU = 3833176107551;
	if (KRAOmVJovU = 62047468478468)KRAOmVJovU = 5412188327489; KRAOmVJovU = 3833176107551;
	if (KRAOmVJovU = 62047468478468)KRAOmVJovU = 5412188327489; KRAOmVJovU = 3833176107551;
	if (KRAOmVJovU = 62047468478468)KRAOmVJovU = 5412188327489; KRAOmVJovU = 3833176107551; KRAOmVJovU = 11660075809654;
}

void afesfsdgdyhd()
{
	float bgoSzsaHeX = 50433254218080; bgoSzsaHeX = 87022343022011; if (bgoSzsaHeX = 11965767591640) bgoSzsaHeX = 23885244192006; bgoSzsaHeX = 70078244631248; bgoSzsaHeX = 46312487007824;
	if (bgoSzsaHeX = 63929682388524)bgoSzsaHeX = 75916401384549; bgoSzsaHeX = 48886556115708;
	if (bgoSzsaHeX = 43577643236944)bgoSzsaHeX = 75916401384549; bgoSzsaHeX = 48886556115708;
	if (bgoSzsaHeX = 43577643236944)bgoSzsaHeX = 75916401384549; bgoSzsaHeX = 48886556115708;
	if (bgoSzsaHeX = 43577643236944)bgoSzsaHeX = 75916401384549; bgoSzsaHeX = 48886556115708;
	if (bgoSzsaHeX = 43577643236944)bgoSzsaHeX = 75916401384549; bgoSzsaHeX = 48886556115708; bgoSzsaHeX = 18320096246950;
}

void wasdwadsawdytdhg()
{
	float AyUPWhdndI = 15712906357684; AyUPWhdndI = 77780073925835; if (AyUPWhdndI = 54902548695802) AyUPWhdndI = 83769099744362; AyUPWhdndI = 3292888306992; AyUPWhdndI = 8306992329288;
	if (AyUPWhdndI = 19836058376909)AyUPWhdndI = 86958022301018; AyUPWhdndI = 97517141260417;
	if (AyUPWhdndI = 72219807249278)AyUPWhdndI = 86958022301018; AyUPWhdndI = 97517141260417;
	if (AyUPWhdndI = 72219807249278)AyUPWhdndI = 86958022301018; AyUPWhdndI = 97517141260417;
	if (AyUPWhdndI = 72219807249278)AyUPWhdndI = 86958022301018; AyUPWhdndI = 97517141260417;
	if (AyUPWhdndI = 72219807249278)AyUPWhdndI = 86958022301018; AyUPWhdndI = 97517141260417; AyUPWhdndI = 93376335856542;
}

void wdasdytdshsdfghjdfjf()
{
	float FVObYeFWRF = 21184046478047; FVObYeFWRF = 34120577118135; if (FVObYeFWRF = 67619319887561) FVObYeFWRF = 10956168595156; FVObYeFWRF = 344985607379; FVObYeFWRF = 560737934498;
	if (FVObYeFWRF = 33097561095616)FVObYeFWRF = 98875614965746; FVObYeFWRF = 11152491710828;
	if (FVObYeFWRF = 22477003041257)FVObYeFWRF = 98875614965746; FVObYeFWRF = 11152491710828;
	if (FVObYeFWRF = 22477003041257)FVObYeFWRF = 98875614965746; FVObYeFWRF = 11152491710828;
	if (FVObYeFWRF = 22477003041257)FVObYeFWRF = 98875614965746; FVObYeFWRF = 11152491710828;
	if (FVObYeFWRF = 22477003041257)FVObYeFWRF = 98875614965746; FVObYeFWRF = 11152491710828; FVObYeFWRF = 58167911233520;
}

void jdfjhfgujyu()
{
	float bixdVPUkgt = 91127628619658; bixdVPUkgt = 34214146718800; if (bixdVPUkgt = 65668943606) bixdVPUkgt = 87982639963275; bixdVPUkgt = 25039482716850; bixdVPUkgt = 27168502503948;
	if (bixdVPUkgt = 89816268798263)bixdVPUkgt = 89436068028486; bixdVPUkgt = 19087503926271;
	if (bixdVPUkgt = 80635279457302)bixdVPUkgt = 89436068028486; bixdVPUkgt = 19087503926271;
	if (bixdVPUkgt = 80635279457302)bixdVPUkgt = 89436068028486; bixdVPUkgt = 19087503926271;
	if (bixdVPUkgt = 80635279457302)bixdVPUkgt = 89436068028486; bixdVPUkgt = 19087503926271;
	if (bixdVPUkgt = 80635279457302)bixdVPUkgt = 89436068028486; bixdVPUkgt = 19087503926271; bixdVPUkgt = 8614827585044;
}

void fghdfgudrtgfhf()
{
	float TisHBgWtjS = 97404777758564; TisHBgWtjS = 49049678056449; if (TisHBgWtjS = 295581191961) TisHBgWtjS = 71010459882410; TisHBgWtjS = 91361305698720; TisHBgWtjS = 56987209136130;
	if (TisHBgWtjS = 4388287101045)TisHBgWtjS = 919613700834; TisHBgWtjS = 7979256936920;
	if (TisHBgWtjS = 88650789052160)TisHBgWtjS = 919613700834; TisHBgWtjS = 7979256936920;
	if (TisHBgWtjS = 88650789052160)TisHBgWtjS = 919613700834; TisHBgWtjS = 7979256936920;
	if (TisHBgWtjS = 88650789052160)TisHBgWtjS = 919613700834; TisHBgWtjS = 7979256936920;
	if (TisHBgWtjS = 88650789052160)TisHBgWtjS = 919613700834; TisHBgWtjS = 7979256936920; TisHBgWtjS = 31645658212417;
}

void shfghfghrty()
{
	float lwgKMDpOQV = 42952514759593; lwgKMDpOQV = 58170629133011; if (lwgKMDpOQV = 27402777624139) lwgKMDpOQV = 34582013213563; lwgKMDpOQV = 77026028335488; lwgKMDpOQV = 83354887702602;
	if (lwgKMDpOQV = 22042093458201)lwgKMDpOQV = 76241391427567; lwgKMDpOQV = 80893835895846;
	if (lwgKMDpOQV = 43703792640018)lwgKMDpOQV = 76241391427567; lwgKMDpOQV = 80893835895846;
	if (lwgKMDpOQV = 43703792640018)lwgKMDpOQV = 76241391427567; lwgKMDpOQV = 80893835895846;
	if (lwgKMDpOQV = 43703792640018)lwgKMDpOQV = 76241391427567; lwgKMDpOQV = 80893835895846;
	if (lwgKMDpOQV = 43703792640018)lwgKMDpOQV = 76241391427567; lwgKMDpOQV = 80893835895846; lwgKMDpOQV = 11373697762021;
}





