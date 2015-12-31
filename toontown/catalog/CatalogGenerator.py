# Embedded file name: toontown.catalog.CatalogGenerator
from direct.directnotify import DirectNotifyGlobal
import CatalogItem
import CatalogItemList
from CatalogFurnitureItem import CatalogFurnitureItem, nextAvailableCloset, getAllClosets, get50ItemCloset, getMaxClosets, get50ItemTrunk
from CatalogAnimatedFurnitureItem import CatalogAnimatedFurnitureItem
from CatalogClothingItem import CatalogClothingItem, getAllClothes
from CatalogChatItem import CatalogChatItem, getChatRange
from CatalogEmoteItem import CatalogEmoteItem
from CatalogWallpaperItem import CatalogWallpaperItem, getWallpapers
from CatalogFlooringItem import CatalogFlooringItem, getFloorings
from CatalogMouldingItem import CatalogMouldingItem, getAllMouldings
from CatalogWainscotingItem import CatalogWainscotingItem, getAllWainscotings
from CatalogWindowItem import CatalogWindowItem
from CatalogPoleItem import nextAvailablePole, getAllPoles
from CatalogPetTrickItem import CatalogPetTrickItem, getAllPetTricks
from CatalogGardenItem import CatalogGardenItem
from CatalogToonStatueItem import CatalogToonStatueItem
from CatalogRentalItem import CatalogRentalItem
from CatalogGardenStarterItem import CatalogGardenStarterItem
from CatalogNametagItem import CatalogNametagItem
from CatalogAccessoryItem import CatalogAccessoryItem
from direct.actor import Actor
from toontown.toonbase import TTLocalizer
from toontown.toonbase import ToontownGlobals
import types
import random
import time
from pandac.PandaModules import *
MetaItems = {100: getAllClothes(101, 102, 103, 104, 105, 106, 107, 108, 109, 109, 111, 115, 201, 202, 203, 204, 205, 206, 207, 208, 209, 209, 211, 215),
             300: getAllClothes(301, 302, 303, 304, 305, 308, 401, 403, 404, 405, 407, 451, 452, 453),
             2000: getChatRange(0, 1999),
             2010: getChatRange(2000, 2999),
             2020: getChatRange(3000, 3999),
             2030: getChatRange(4000, 4999),
             2040: getChatRange(6000, 6999),
             2050: getChatRange(7000, 7999),
             2900: getChatRange(10000, 10002, 10005, 10005, 10007, 10008, 10010, 10099),
             2910: getChatRange(11000, 11005, 11008, 11008, 11012, 11015, 11017, 11019, 11021, 11022),
             2920: getChatRange(12000, 12049),
             2921: getChatRange(12050, 12099),
             2930: getChatRange(13000, 13099),
             2940: getChatRange(14000, 14099),
             3000: getWallpapers(1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100),
             3010: getWallpapers(2200, 2300, 2400, 2500, 2600, 2700, 2800),
             3020: getWallpapers(2900, 3000, 3100, 3200, 3300, 3400, 3500, 3600),
             3030: getWallpapers(3700, 3800, 3900),
             3500: getAllWainscotings(1000, 1010),
             3510: getAllWainscotings(1020),
             3520: getAllWainscotings(1030),
             3530: getAllWainscotings(1040),
             4000: getFloorings(1000, 1010, 1020, 1030, 1040, 1050, 1060, 1070, 1080, 1090, 1100),
             4010: getFloorings(1110, 1120, 1130),
             4020: getFloorings(1140, 1150, 1160, 1170, 1180, 1190),
             4500: getAllMouldings(1000, 1010),
             4510: getAllMouldings(1020, 1030, 1040),
             4520: getAllMouldings(1070),
             5000: getAllPetTricks()}
MetaItemChatKeysSold = (2000,
                        2010,
                        2020,
                        2030,
                        2040,
                        2050,
                        2900,
                        2910,
                        2920,
                        2921,
                        2930)


def getAllChatItemsSold():
    result = []
    for key in MetaItemChatKeysSold:
        result += MetaItems[key]

    return result


class Sale():

    def __init__(self, *args):
        self.args = args


MonthlySchedule = (
    (7, 1, 8, 31,
     (CatalogAccessoryItem(101),
      CatalogAccessoryItem(103),
      CatalogAccessoryItem(117),
      CatalogAccessoryItem(118),
      CatalogAccessoryItem(123),
      CatalogAccessoryItem(124),
      CatalogAccessoryItem(125),
      CatalogAccessoryItem(126),
      CatalogAccessoryItem(127),
      CatalogAccessoryItem(128),
      CatalogAccessoryItem(129),
      CatalogAccessoryItem(130),
      CatalogAccessoryItem(202),
      CatalogAccessoryItem(204),
      CatalogAccessoryItem(205),
      CatalogAccessoryItem(206),
      CatalogAccessoryItem(208),
      CatalogAccessoryItem(209),
      CatalogAccessoryItem(210),
      CatalogAccessoryItem(302),
      CatalogAccessoryItem(308),
      CatalogAccessoryItem(309),
      CatalogAccessoryItem(310),
      CatalogAccessoryItem(317),
      CatalogAccessoryItem(402),
      CatalogAccessoryItem(403),
      CatalogAccessoryItem(405),
      CatalogAccessoryItem(406),
      CatalogAccessoryItem(407),
      CatalogAccessoryItem(408),
      CatalogAccessoryItem(409),
      CatalogAccessoryItem(410),
      CatalogAccessoryItem(411),
      CatalogAccessoryItem(412),
      CatalogAccessoryItem(413))),
    (9, 1, 10, 31,
     (CatalogAccessoryItem(306),
      CatalogAccessoryItem(318),
      CatalogAccessoryItem(121),
      CatalogAccessoryItem(212),
      CatalogAccessoryItem(214),
      CatalogAccessoryItem(312),
      CatalogAccessoryItem(150),
      CatalogAccessoryItem(151),
      CatalogAccessoryItem(147),
      CatalogAccessoryItem(422),
      CatalogAccessoryItem(141),
      CatalogAccessoryItem(146),
      CatalogAccessoryItem(444),
      CatalogAccessoryItem(122),
      CatalogAccessoryItem(430),
      CatalogAccessoryItem(145),
      CatalogAccessoryItem(132),
      CatalogAccessoryItem(161),
      CatalogAccessoryItem(134),
      CatalogAccessoryItem(149),
      CatalogAccessoryItem(207),
      CatalogAccessoryItem(215),
      CatalogAccessoryItem(216),
      CatalogAccessoryItem(417),
      CatalogAccessoryItem(222),
      CatalogAccessoryItem(321),
      CatalogAccessoryItem(322),
      CatalogAccessoryItem(307),
      CatalogAccessoryItem(135),
      CatalogAccessoryItem(174))),
    (11, 1, 12, 31,
     (CatalogAccessoryItem(434),
      CatalogAccessoryItem(435),
      CatalogAccessoryItem(441),
      CatalogAccessoryItem(446),
      CatalogAccessoryItem(429),
      CatalogAccessoryItem(110),
      CatalogAccessoryItem(148),
      CatalogAccessoryItem(443),
      CatalogAccessoryItem(426),
      CatalogAccessoryItem(439),
      CatalogAccessoryItem(143),
      CatalogAccessoryItem(313),
      CatalogAccessoryItem(311),
      CatalogAccessoryItem(437),
      CatalogAccessoryItem(415),
      CatalogAccessoryItem(167),
      CatalogAccessoryItem(157),
      CatalogAccessoryItem(106),
      CatalogAccessoryItem(109),
      CatalogAccessoryItem(421),
      CatalogAccessoryItem(401),
      CatalogAccessoryItem(447),
      CatalogAccessoryItem(213),
      CatalogAccessoryItem(330))),
    (1, 1, 2, 29,
     (CatalogAccessoryItem(440),
      CatalogAccessoryItem(425),
      CatalogAccessoryItem(158),
      CatalogAccessoryItem(431),
      CatalogAccessoryItem(420),
      CatalogAccessoryItem(155),
      CatalogAccessoryItem(419),
      CatalogAccessoryItem(436),
      CatalogAccessoryItem(428),
      CatalogAccessoryItem(304),
      CatalogAccessoryItem(301),
      CatalogAccessoryItem(416),
      CatalogAccessoryItem(414),
      CatalogAccessoryItem(164),
      CatalogAccessoryItem(323),
      CatalogAccessoryItem(108),
      CatalogAccessoryItem(139),
      CatalogAccessoryItem(316),
      CatalogAccessoryItem(131),
      CatalogAccessoryItem(170),
      CatalogAccessoryItem(221),
      CatalogAccessoryItem(225))),
    (3, 1, 4, 30,
     (CatalogAccessoryItem(305),
      CatalogAccessoryItem(303),
      CatalogAccessoryItem(144),
      CatalogAccessoryItem(120),
      CatalogAccessoryItem(116),
      CatalogAccessoryItem(217),
      CatalogAccessoryItem(218),
      CatalogAccessoryItem(219),
      CatalogAccessoryItem(445),
      CatalogAccessoryItem(418),
      CatalogAccessoryItem(432),
      CatalogAccessoryItem(427),
      CatalogAccessoryItem(423),
      CatalogAccessoryItem(137),
      CatalogAccessoryItem(163),
      CatalogAccessoryItem(165),
      CatalogAccessoryItem(153),
      CatalogAccessoryItem(319),
      CatalogAccessoryItem(154),
      CatalogAccessoryItem(159),
      CatalogAccessoryItem(162),
      CatalogAccessoryItem(315),
      CatalogAccessoryItem(160),
      CatalogAccessoryItem(102))),
    (5, 1, 6, 30,
     (CatalogAccessoryItem(119),
      CatalogAccessoryItem(136),
      CatalogAccessoryItem(169),
      CatalogAccessoryItem(140),
      CatalogAccessoryItem(168),
      CatalogAccessoryItem(138),
      CatalogAccessoryItem(220),
      CatalogAccessoryItem(433),
      CatalogAccessoryItem(442),
      CatalogAccessoryItem(424),
      CatalogAccessoryItem(404),
      CatalogAccessoryItem(156),
      CatalogAccessoryItem(142),
      CatalogAccessoryItem(152),
      CatalogAccessoryItem(133),
      CatalogAccessoryItem(166),
      CatalogAccessoryItem(211),
      CatalogAccessoryItem(314),
      CatalogAccessoryItem(320),
      CatalogAccessoryItem(173),
      CatalogAccessoryItem(328),
      CatalogAccessoryItem(329))),
    (10, 3, 11, 2,
     ((3, 2900),
      CatalogChatItem(10003),
      CatalogClothingItem(1001, 0),
      CatalogClothingItem(1002, 0),
      CatalogWallpaperItem(10100),
      CatalogWallpaperItem(10200),
      CatalogFurnitureItem(10000),
      CatalogFurnitureItem(10010),
      CatalogNametagItem(9))),
    (10, 3, 11, 2,
     (CatalogClothingItem(1744, 0),
      CatalogClothingItem(1745, 0),
      CatalogClothingItem(1748, 0),
      CatalogClothingItem(1771, 0),
      CatalogClothingItem(1774, 0),
      CatalogClothingItem(1775, 0),
      CatalogClothingItem(1743, 0),
      CatalogClothingItem(1746, 0),
      CatalogClothingItem(1747, 0),
      CatalogClothingItem(1112, 0),
      CatalogClothingItem(1113, 0),
      CatalogClothingItem(1114, 0),
      CatalogClothingItem(1115, 0),
      CatalogClothingItem(1116, 0),
      CatalogClothingItem(1117, 0),
      CatalogClothingItem(1118, 0),
      CatalogClothingItem(1119, 0),
      CatalogClothingItem(1120, 0),
      CatalogClothingItem(1121, 0),
      CatalogClothingItem(1122, 0),
      CatalogClothingItem(1123, 0),
      CatalogClothingItem(1124, 0),
      CatalogClothingItem(1125, 0),
      CatalogClothingItem(1126, 0),
      CatalogClothingItem(1127, 0),
      CatalogAccessoryItem(171),
      CatalogAccessoryItem(172),
      CatalogAccessoryItem(224),
      CatalogAccessoryItem(324),
      CatalogAccessoryItem(325),
      CatalogAccessoryItem(326),
      CatalogAccessoryItem(327),
      CatalogAccessoryItem(448),
      CatalogAccessoryItem(449),
      CatalogClothingItem(1801, 0))),
    (2, 1, 2, 28,
     ((3, 2920),
      (2, 2921),
      CatalogClothingItem(1200, 0),
      CatalogClothingItem(1201, 0),
      CatalogClothingItem(1202, 0),
      CatalogClothingItem(1203, 0),
      CatalogClothingItem(1204, 0),
      CatalogClothingItem(1205, 0),
      CatalogWallpaperItem(12000),
      CatalogWallpaperItem(12100),
      CatalogWallpaperItem(12200),
      CatalogWallpaperItem(12300),
      CatalogWainscotingItem(1030, 0),
      CatalogWainscotingItem(1030, 1),
      CatalogMouldingItem(1060, 0),
      CatalogMouldingItem(1060, 1),
      CatalogClothingItem(1206, 0),
      CatalogClothingItem(1207, 0),
      CatalogClothingItem(1208, 0),
      CatalogClothingItem(1209, 0),
      CatalogClothingItem(1210, 0),
      CatalogClothingItem(1211, 0),
      CatalogClothingItem(1212, 0),
      CatalogFurnitureItem(1670),
      CatalogFurnitureItem(1680),
      CatalogFurnitureItem(1450),
      CatalogMouldingItem(1100, 0),
      CatalogMouldingItem(1110, 0),
      CatalogMouldingItem(1120, 0))),
    (3, 1, 3, 20,
     ((3, 2930),
      CatalogClothingItem(1300, 0),
      CatalogClothingItem(1301, 0),
      CatalogClothingItem(1302, 0),
      CatalogClothingItem(1303, 0),
      CatalogClothingItem(1304, 0),
      CatalogClothingItem(1305, 0),
      CatalogClothingItem(1306, 0),
      CatalogWallpaperItem(13000),
      CatalogWallpaperItem(13100),
      CatalogWallpaperItem(13200),
      CatalogWallpaperItem(13300),
      CatalogFlooringItem(11000),
      CatalogFlooringItem(11010))),
    # CatalogFlooringItem(11020)
    (5, 25, 6, 25,
     (CatalogClothingItem(1400, 0),
      CatalogClothingItem(1401, 0),
      CatalogClothingItem(1402, 0))),
    (8, 1, 8, 31,
     (CatalogClothingItem(1403, 0),
      CatalogClothingItem(1404, 0),
      CatalogClothingItem(1405, 0),
      CatalogClothingItem(1406, 0))),
    (9, 24, 10, 24,
     (CatalogFurnitureItem(450),
      CatalogAnimatedFurnitureItem(460),
      CatalogAnimatedFurnitureItem(270),
      CatalogAnimatedFurnitureItem(990))),
    (6, 15, 8, 15, 2010, 2010, ((4, 2940),)),
    (9, 1, 9, 30, ()),
    (1, 1, 1, 31, ()),
    (4, 1, 4, 30, ()),
    (6, 1, 6, 30, ()),
    (6, 26, 7, 16,
     (CatalogClothingItem(1500, 0),
      CatalogClothingItem(1501, 0),
      CatalogClothingItem(1502, 0),
      CatalogClothingItem(1503, 0))),
    (12, 4, 1, 4, ((3, 2910),)),
    (12, 4, 1, 4,
     (CatalogFurnitureItem(680),
      CatalogFurnitureItem(681),
      # CatalogGardenItem(130, 1),
      # CatalogGardenItem(131, 1),
      CatalogAnimatedFurnitureItem(10020),
      CatalogFurnitureItem(10030, 0))),
    (12, 4, 1, 4,
     (CatalogWallpaperItem(11000),
      CatalogWallpaperItem(11100),
      CatalogFlooringItem(10010),
      CatalogMouldingItem(1090, 0),
      CatalogClothingItem(1100, 0),
      CatalogClothingItem(1101, 0),
      CatalogClothingItem(1104, 0),
      CatalogClothingItem(1105, 0),
      CatalogClothingItem(1108, 0),
      CatalogClothingItem(1109, 0),
      CatalogClothingItem(1802, 0))),
    (12, 11, 1, 4,
     (CatalogFurnitureItem(1040),
      CatalogFurnitureItem(1050),
      CatalogWallpaperItem(11200),
      CatalogFlooringItem(10000),
      CatalogMouldingItem(1080, 0),
      CatalogMouldingItem(1085, 0),
      CatalogClothingItem(1102, 0),
      CatalogClothingItem(1103, 0),
      CatalogClothingItem(1106, 0),
      CatalogClothingItem(1107, 0),
      CatalogClothingItem(1110, 0),
      CatalogClothingItem(1111, 0))),
    (6, 9, 7, 15, 2010, 2010, (CatalogClothingItem(1751, 0),)),
    (6, 14, 7, 15, 2010, 2010,
     (CatalogClothingItem(1754, 0),
      CatalogClothingItem(1755, 0),
      CatalogClothingItem(1756, 0))),
    (7, 21, 8, 17, 2010, 2010,
     (CatalogClothingItem(1749, 0),
      CatalogClothingItem(1750, 0),
      CatalogClothingItem(1757, 0),
      CatalogClothingItem(1758, 0))),
    (8, 25, 9, 21, 2010, 2010, (CatalogClothingItem(1763, 0),)),
    (6, 5, 7, 1,
     (CatalogClothingItem(1768, 0),
      CatalogClothingItem(1769, 0))),
    (1, 1, 12, 31,
     # CatalogGardenItem(100, 1), #GARDENS
      # CatalogGardenItem(101, 1),
      # CatalogGardenItem(103, 1),
      # CatalogGardenItem(104, 1),
      # CatalogToonStatueItem(105, endPoseIndex=108),
      CatalogRentalItem(1, 2880, 1000),
      CatalogGardenStarterItem(),
     (
      # CatalogToonStatueItem(105, endPoseIndex=108),
      CatalogRentalItem(1, 2880, 1000),
      CatalogNametagItem(100),
      CatalogNametagItem(0),
      CatalogClothingItem(1608, 0, 720),
      CatalogClothingItem(1605, 0, 720),
      CatalogClothingItem(1602, 0, 720),
      CatalogClothingItem(1607, 0, 540),
      CatalogClothingItem(1604, 0, 540),
      CatalogClothingItem(1601, 0, 540),
      CatalogClothingItem(1606, 0, 360),
      CatalogClothingItem(1603, 0, 360),
      CatalogClothingItem(1600, 0, 360),
      CatalogEmoteItem(20, 90),
      CatalogEmoteItem(21, 180),
      CatalogEmoteItem(22, 360),
      CatalogEmoteItem(23, 540),
      CatalogEmoteItem(24, 720))),
    (5, 26, 6, 30, 2013, 2013, (CatalogAccessoryItem(175),)),
    (8, 27, 9, 5, 2013, 2013,
     ((3, 2900),
      CatalogChatItem(10003),
      CatalogClothingItem(1001, 0),
      CatalogClothingItem(1002, 0),
      CatalogWallpaperItem(10100),
      CatalogWallpaperItem(10200),
      CatalogFurnitureItem(10000),
      CatalogFurnitureItem(10010),
      CatalogNametagItem(9),
      CatalogClothingItem(1744, 0),
      CatalogClothingItem(1745, 0),
      CatalogClothingItem(1748, 0),
      CatalogClothingItem(1771, 0),
      CatalogClothingItem(1774, 0),
      CatalogClothingItem(1775, 0),
      CatalogClothingItem(1743, 0),
      CatalogClothingItem(1746, 0),
      CatalogClothingItem(1747, 0),
      CatalogClothingItem(1112, 0),
      CatalogClothingItem(1113, 0),
      CatalogClothingItem(1114, 0),
      CatalogClothingItem(1115, 0),
      CatalogClothingItem(1116, 0),
      CatalogClothingItem(1117, 0),
      CatalogClothingItem(1118, 0),
      CatalogClothingItem(1119, 0),
      CatalogClothingItem(1120, 0),
      CatalogClothingItem(1121, 0),
      CatalogClothingItem(1122, 0),
      CatalogClothingItem(1123, 0),
      CatalogClothingItem(1124, 0),
      CatalogClothingItem(1125, 0),
      CatalogClothingItem(1126, 0),
      CatalogClothingItem(1127, 0),
      CatalogAccessoryItem(171),
      CatalogAccessoryItem(172),
      CatalogAccessoryItem(224),
      CatalogAccessoryItem(324),
      CatalogAccessoryItem(325),
      CatalogAccessoryItem(326),
      CatalogAccessoryItem(327),
      CatalogAccessoryItem(448),
      CatalogAccessoryItem(449),
      CatalogClothingItem(1801, 0),
      CatalogAccessoryItem(175))),
    (9, 3, 9, 12, 2013, 2013,
     ((3, 2910),
      CatalogFurnitureItem(680),
      CatalogFurnitureItem(681),
      # CatalogGardenItem(130, 1), #MORE GARDEN STUFF
      # CatalogGardenItem(131, 1),
      CatalogAnimatedFurnitureItem(10020),
      CatalogFurnitureItem(10030, 0),
      CatalogWallpaperItem(11000),
      CatalogWallpaperItem(11100),
      CatalogFlooringItem(10010),
      CatalogMouldingItem(1090, 0),
      CatalogClothingItem(1100, 0),
      CatalogClothingItem(1101, 0),
      CatalogClothingItem(1104, 0),
      CatalogClothingItem(1105, 0),
      CatalogClothingItem(1108, 0),
      CatalogClothingItem(1109, 0),
      CatalogClothingItem(1802, 0),
      CatalogFurnitureItem(1040),
      CatalogFurnitureItem(1050),
      CatalogWallpaperItem(11200),
      CatalogFlooringItem(10000),
      CatalogMouldingItem(1080, 0),
      CatalogMouldingItem(1085, 0),
      CatalogClothingItem(1102, 0),
      CatalogClothingItem(1103, 0),
      CatalogClothingItem(1106, 0),
      CatalogClothingItem(1107, 0),
      CatalogClothingItem(1110, 0),
      CatalogClothingItem(1111, 0))),
    (8, 20, 9, 19, 2013, 2013,
     (CatalogAccessoryItem(101),
      CatalogAccessoryItem(103),
      CatalogAccessoryItem(117),
      CatalogAccessoryItem(118),
      CatalogAccessoryItem(123),
      CatalogAccessoryItem(124),
      CatalogAccessoryItem(125),
      CatalogAccessoryItem(126),
      CatalogAccessoryItem(127),
      CatalogAccessoryItem(128),
      CatalogAccessoryItem(129),
      CatalogAccessoryItem(130),
      CatalogAccessoryItem(202),
      CatalogAccessoryItem(204),
      CatalogAccessoryItem(205),
      CatalogAccessoryItem(206),
      CatalogAccessoryItem(208),
      CatalogAccessoryItem(209),
      CatalogAccessoryItem(210),
      CatalogAccessoryItem(302),
      CatalogAccessoryItem(308),
      CatalogAccessoryItem(309),
      CatalogAccessoryItem(310),
      CatalogAccessoryItem(317),
      CatalogAccessoryItem(402),
      CatalogAccessoryItem(403),
      CatalogAccessoryItem(405),
      CatalogAccessoryItem(406),
      CatalogAccessoryItem(407),
      CatalogAccessoryItem(408),
      CatalogAccessoryItem(409),
      CatalogAccessoryItem(410),
      CatalogAccessoryItem(411),
      CatalogAccessoryItem(412),
      CatalogAccessoryItem(413),
      CatalogAccessoryItem(306),
      CatalogAccessoryItem(318),
      CatalogAccessoryItem(121),
      CatalogAccessoryItem(212),
      CatalogAccessoryItem(214),
      CatalogAccessoryItem(312),
      CatalogAccessoryItem(150),
      CatalogAccessoryItem(151),
      CatalogAccessoryItem(147),
      CatalogAccessoryItem(422),
      CatalogAccessoryItem(141),
      CatalogAccessoryItem(146),
      CatalogAccessoryItem(444),
      CatalogAccessoryItem(122),
      CatalogAccessoryItem(430),
      CatalogAccessoryItem(145),
      CatalogAccessoryItem(132),
      CatalogAccessoryItem(161),
      CatalogAccessoryItem(134),
      CatalogAccessoryItem(149),
      CatalogAccessoryItem(207),
      CatalogAccessoryItem(215),
      CatalogAccessoryItem(216),
      CatalogAccessoryItem(417),
      CatalogAccessoryItem(222),
      CatalogAccessoryItem(321),
      CatalogAccessoryItem(322),
      CatalogAccessoryItem(307),
      CatalogAccessoryItem(135),
      CatalogAccessoryItem(174),
      CatalogAccessoryItem(434),
      CatalogAccessoryItem(435),
      CatalogAccessoryItem(441),
      CatalogAccessoryItem(446),
      CatalogAccessoryItem(429),
      CatalogAccessoryItem(110),
      CatalogAccessoryItem(148),
      CatalogAccessoryItem(443),
      CatalogAccessoryItem(426),
      CatalogAccessoryItem(439),
      CatalogAccessoryItem(143),
      CatalogAccessoryItem(313),
      CatalogAccessoryItem(311),
      CatalogAccessoryItem(437),
      CatalogAccessoryItem(415),
      CatalogAccessoryItem(167),
      CatalogAccessoryItem(157),
      CatalogAccessoryItem(106),
      CatalogAccessoryItem(109),
      CatalogAccessoryItem(421),
      CatalogAccessoryItem(401),
      CatalogAccessoryItem(447),
      CatalogAccessoryItem(213),
      CatalogAccessoryItem(330),
      CatalogAccessoryItem(440),
      CatalogAccessoryItem(425),
      CatalogAccessoryItem(158),
      CatalogAccessoryItem(431),
      CatalogAccessoryItem(420),
      CatalogAccessoryItem(155),
      CatalogAccessoryItem(419),
      CatalogAccessoryItem(436),
      CatalogAccessoryItem(428),
      CatalogAccessoryItem(304),
      CatalogAccessoryItem(301),
      CatalogAccessoryItem(416),
      CatalogAccessoryItem(414),
      CatalogAccessoryItem(164),
      CatalogAccessoryItem(323),
      CatalogAccessoryItem(108),
      CatalogAccessoryItem(139),
      CatalogAccessoryItem(316),
      CatalogAccessoryItem(131),
      CatalogAccessoryItem(170),
      CatalogAccessoryItem(221),
      CatalogAccessoryItem(225),
      CatalogAccessoryItem(305),
      CatalogAccessoryItem(303),
      CatalogAccessoryItem(144),
      CatalogAccessoryItem(120),
      CatalogAccessoryItem(116),
      CatalogAccessoryItem(217),
      CatalogAccessoryItem(218),
      CatalogAccessoryItem(219),
      CatalogAccessoryItem(445),
      CatalogAccessoryItem(418),
      CatalogAccessoryItem(432),
      CatalogAccessoryItem(427),
      CatalogAccessoryItem(423),
      CatalogAccessoryItem(137),
      CatalogAccessoryItem(163),
      CatalogAccessoryItem(165),
      CatalogAccessoryItem(153),
      CatalogAccessoryItem(319),
      CatalogAccessoryItem(154),
      CatalogAccessoryItem(159),
      CatalogAccessoryItem(162),
      CatalogAccessoryItem(315),
      CatalogAccessoryItem(160),
      CatalogAccessoryItem(102),
      CatalogAccessoryItem(119),
      CatalogAccessoryItem(136),
      CatalogAccessoryItem(169),
      CatalogAccessoryItem(140),
      CatalogAccessoryItem(168),
      CatalogAccessoryItem(138),
      CatalogAccessoryItem(220),
      CatalogAccessoryItem(433),
      CatalogAccessoryItem(442),
      CatalogAccessoryItem(424),
      CatalogAccessoryItem(404),
      CatalogAccessoryItem(156),
      CatalogAccessoryItem(142),
      CatalogAccessoryItem(152),
      CatalogAccessoryItem(133),
      CatalogAccessoryItem(166),
      CatalogAccessoryItem(211),
      CatalogAccessoryItem(314),
      CatalogAccessoryItem(320),
      CatalogAccessoryItem(173),
      CatalogAccessoryItem(328),
      CatalogAccessoryItem(329))))
WeeklySchedule = (
    (100, (5, 2000),
     3000, 3500, 4000, 4500, CatalogEmoteItem(5),
     CatalogFurnitureItem(210, 0),
     CatalogFurnitureItem(220, 0)),
    (100, (5, 2000),
     CatalogFurnitureItem(1400),
     3000, 3500, 4000, 4500, CatalogFurnitureItem(600),
     CatalogFurnitureItem(610),
     CatalogClothingItem(116, 0),
     CatalogClothingItem(216, 0)),
    (300, (5, 2000),
     CatalogFurnitureItem(1410),
     3000, 3500, 4000, 4500, CatalogFurnitureItem(1100),
     CatalogFurnitureItem(1020),
     CatalogClothingItem(408, 0),
     5000),
    (100, (5, 2000),
     CatalogWindowItem(40),
     3000, 3500, 4000, 4500, CatalogFurnitureItem(110),
     CatalogFurnitureItem(100),
     nextAvailablePole, nextAvailableCloset),
    (100, (5, 2000),
     CatalogFurnitureItem(1420),
     CatalogEmoteItem(9),
     3000, 3500, 4000, 4500, CatalogFurnitureItem(700),
     CatalogFurnitureItem(710)),
    (300, (5, 2000),
     3000, 3500, 4000, 4500, CatalogFurnitureItem(410),
     CatalogAnimatedFurnitureItem(490),
     CatalogFurnitureItem(1000),
     CatalogClothingItem(117, 0),
     CatalogClothingItem(217, 0),
     nextAvailableCloset),
    (100, (5, 2000),
     CatalogFurnitureItem(1430),
     3000, 3500, 4000, 4500, CatalogFurnitureItem(1510),
     CatalogFurnitureItem(1610),
     5000, CatalogNametagItem(1)),
    (100, (5, 2000),
     CatalogWindowItem(70),
     3000, 3500, 4000, 4500, CatalogFurnitureItem(1210),
     CatalogClothingItem(409, 0),
     nextAvailablePole, nextAvailableCloset),
    (300, (5, 2000),
     CatalogEmoteItem(13),
     3000, 3500, 4000, 4500, CatalogFurnitureItem(1200),
     CatalogFurnitureItem(900)),
    (100, (5, 2000),
     3000, 3500, 4000, 4500, CatalogFurnitureItem(910),
     CatalogFurnitureItem(1600),
     CatalogClothingItem(118, 0),
     CatalogClothingItem(218, 0),
     nextAvailableCloset),
    (100, (5, 2000),
     3000, 3500, 4000, 4500, CatalogFurnitureItem(800),
     CatalogFurnitureItem(1010),
     CatalogClothingItem(410, 0),
     5000),
    (300, (5, 2000),
     3000, 3500, 4000, 4500, CatalogFurnitureItem(620),
     nextAvailablePole, nextAvailableCloset),
    (300, (5, 2000),
     3000, 3500, 4000, 4500, CatalogClothingItem(119, 0),
     CatalogClothingItem(219, 0)),
    (100, (2, 2000),
     (3, 2010),
     3010, 3510, 4010, 4510, CatalogFurnitureItem(1110),
     CatalogFurnitureItem(630),
     CatalogFurnitureItem(1630),
     CatalogEmoteItem(11),
     CatalogNametagItem(11),
     nextAvailableCloset),
    (100, (2, 2000),
     (3, 2010),
     3010, 3510, 4010, 4510, CatalogFurnitureItem(230),
     CatalogFurnitureItem(920),
     CatalogFurnitureItem(1440)),
    (300, (2, 2000),
     (3, 2010),
     3010, 3510, 4010, 4510, CatalogFurnitureItem(420),
     CatalogAnimatedFurnitureItem(480),
     CatalogFurnitureItem(120),
     CatalogClothingItem(120, 0),
     CatalogClothingItem(220, 0),
     nextAvailablePole, 5000, nextAvailableCloset),
    (100, (2, 2000),
     (3, 2010),
     3010, 3510, 4010, 4510, CatalogFurnitureItem(1700),
     CatalogFurnitureItem(640),
     CatalogWindowItem(50)),
    (100, (2, 2000),
     (3, 2010),
     3010, 3510, 4010, 4510, CatalogFurnitureItem(1120),
     CatalogFurnitureItem(930),
     CatalogFurnitureItem(1500),
     CatalogEmoteItem(6),
     nextAvailableCloset),
    (300, (2, 2000),
     (3, 2010),
     3010, 3510, 4010, 4510, CatalogFurnitureItem(430),
     CatalogAnimatedFurnitureItem(491),
     CatalogFurnitureItem(1620),
     CatalogFurnitureItem(1442)),
    (100, (2, 2000),
     (3, 2010),
     3010, 3510, 4010, 4510, CatalogFurnitureItem(610),
     CatalogFurnitureItem(940),
     CatalogClothingItem(121, 0),
     CatalogClothingItem(221, 0),
     nextAvailablePole, 5000),
    (100, (2, 2000),
     (3, 2010),
     3010, 3510, 4010, 4510, CatalogFurnitureItem(1710),
     CatalogFurnitureItem(1030),
     CatalogWindowItem(60),
     CatalogNametagItem(7)),
    (300, (2, 2000),
     (3, 2010),
     3010, 3510, 4010, 4510, CatalogFurnitureItem(1130),
     CatalogFurnitureItem(130),
     CatalogEmoteItem(8)),
    (100, (2, 2000),
     (3, 2010),
     3010, 3510, 4010, 4510, CatalogFurnitureItem(1530),
     CatalogFurnitureItem(1640),
     CatalogFurnitureItem(1441)),
    (100, (2, 2000),
     (3, 2010),
     3010, 3510, 4010, 4510, CatalogFurnitureItem(300),
     CatalogFurnitureItem(1220),
     nextAvailablePole, 5000),
    (300, (2, 2000),
     (3, 2010),
     3010, 3510, 4010, 4510, CatalogFurnitureItem(810),
     CatalogFurnitureItem(1230),
     CatalogFurnitureItem(1443)),
    (300, (2, 2000),
     (3, 2010),
     3010, 3510, 4010, 4510, CatalogFurnitureItem(310),
     CatalogFurnitureItem(1520),
     CatalogFurnitureItem(1650),
     CatalogWindowItem(80),
     CatalogClothingItem(222, 0)),
    (100, (1, 2000),
     (2, 2010),
     (3, 2020),
     3020, 3530, 4020, 4520, CatalogFurnitureItem(1240),
     CatalogFurnitureItem(1661),
     CatalogEmoteItem(5)),
    (100, (1, 2000),
     (2, 2010),
     (3, 2020),
     3020, 3530, 4020, 4520, CatalogFurnitureItem(1800),
     CatalogFurnitureItem(240),
     CatalogFurnitureItem(1200),
     CatalogNametagItem(12)),
    (300, (1, 2000),
     (2, 2010),
     (3, 2020),
     3020, 3530, 4020, 4520, CatalogFurnitureItem(145),
     CatalogClothingItem(123, 0),
     CatalogClothingItem(224, 0),
     nextAvailablePole, 5000),
    (100, (1, 2000),
     (2, 2010),
     (3, 2020),
     3020, 3530, 4020, 4520, CatalogWindowItem(100),
     CatalogFurnitureItem(1810)),
    (100, (1, 2000),
     (2, 2010),
     (3, 2020),
     3020, 3530, 4020, 4520, CatalogFurnitureItem(650),
     CatalogFurnitureItem(1900)),
    (300, (1, 2000),
     (2, 2010),
     (3, 2020),
     3020, 3530, 4020, 4520, CatalogFurnitureItem(1725)),
    (100, (1, 2000),
     (2, 2010),
     (3, 2020),
     3020, 3530, 4020, 4520, CatalogWindowItem(90),
     CatalogClothingItem(124, 0),
     CatalogClothingItem(411, 0),
     nextAvailablePole),
    (100, (1, 2000),
     (2, 2010),
     (3, 2020),
     3020, 3530, 4020, 4520, CatalogFurnitureItem(140),
     CatalogFurnitureItem(1020),
     CatalogEmoteItem(13)),
    (300, (1, 2000),
     (2, 2010),
     (3, 2020),
     3020, 3530, 4020, 4520, CatalogFurnitureItem(950),
     CatalogFurnitureItem(1660),
     CatalogClothingItem(310, 0),
     CatalogNametagItem(2)),
    (100, (1, 2000),
     (2, 2010),
     (3, 2020),
     3020, 3530, 4020, 4520, CatalogFurnitureItem(400),
     CatalogAnimatedFurnitureItem(470),
     CatalogFurnitureItem(660),
     CatalogFurnitureItem(1200),
     5000),
    (100, (1, 2000),
     (2, 2010),
     (3, 2020),
     3020, 3530, 4020, 4520, CatalogFurnitureItem(1910),
     nextAvailablePole, CatalogFurnitureItem(1000)),
    (300, (1, 2000),
     (2, 2010),
     (3, 2020),
     3020, 3530, 4020, 4520, CatalogFurnitureItem(1720),
     CatalogEmoteItem(9)),
    (300, (1, 2000),
     (2, 2010),
     (3, 2020),
     3020, 3530, 4020, 4520, CatalogWindowItem(110),
     CatalogClothingItem(311, 0)),
    (100, (1, 2010),
     (2, 2020),
     (3, 2030),
     3020, 3530, 4020, 4520, CatalogWindowItem(120),
     CatalogClothingItem(125, 0),
     5000),
    (300, (1, 2010),
     (2, 2020),
     (3, 2030),
     3020, 3530, 4020, 4520, CatalogClothingItem(412, 0),
     CatalogClothingItem(312, 0),
     CatalogFurnitureItem(1920)),
    (100, (1, 2010),
     (2, 2020),
     (3, 2030),
     3020, 3530, 4020, 4520, nextAvailablePole, CatalogWallpaperItem(3900),
     CatalogFurnitureItem(980),
     CatalogNametagItem(13)),
    (300, (1, 2010),
     (2, 2020),
     (3, 2030),
     3020, 3530, 4020, 4520, CatalogClothingItem(130, 0),
     CatalogFurnitureItem(150)),
    (100, (1, 2010),
     (2, 2020),
     (3, 2030),
     3020, 3530, 4020, 4520, CatalogClothingItem(128, 0),
     CatalogWallpaperItem(3700),
     CatalogFurnitureItem(160)),
    (300, (1, 2010),
     (2, 2020),
     (3, 2030),
     3020, 3530, 4020, 4520, CatalogClothingItem(313, 0),
     CatalogClothingItem(413, 0),
     CatalogFurnitureItem(960),
     CatalogEmoteItem(7)),
    (100, (1, 2010),
     (2, 2020),
     (3, 2030),
     3020, 3530, 4020, 4520, nextAvailablePole, CatalogFurnitureItem(1930),
     CatalogFurnitureItem(670)),
    (300, (1, 2010),
     (2, 2020),
     (3, 2030),
     3020, 3530, 4020, 4520, CatalogClothingItem(126, 0),
     CatalogFurnitureItem(1970),
     5000),
    (100, (1, 2010),
     (2, 2020),
     (3, 2030),
     3020, 3530, 4020, 4520, CatalogFurnitureItem(720),
     CatalogFurnitureItem(970)),
    (300, (1, 2010),
     (2, 2020),
     (3, 2030),
     3020, 3530, 4020, 4520, CatalogClothingItem(127, 0),
     CatalogFurnitureItem(1950),
     CatalogNametagItem(4)),
    (100, (1, 2010),
     (2, 2020),
     (3, 2030),
     3020, 3530, 4020, 4520, nextAvailablePole, CatalogFurnitureItem(1940),
     CatalogWindowItem(130)),
    (300, (1, 2010),
     (2, 2020),
     (3, 2030),
     3020, 3530, 4020, 4520, CatalogWallpaperItem(3800),
     CatalogClothingItem(129, 0),
     CatalogEmoteItem(10)),
    (100, (1, 2010),
     (2, 2020),
     (3, 2030),
     3020, 3530, 4020, 4520, CatalogFurnitureItem(250),
     CatalogFurnitureItem(1960),
     nextAvailablePole),
    Sale(
        CatalogFurnitureItem(210, 0),
        CatalogFurnitureItem(220, 0),
        CatalogFurnitureItem(1100),
        CatalogFurnitureItem(110),
        CatalogFurnitureItem(100),
        CatalogFurnitureItem(700),
        CatalogFurnitureItem(710),
        CatalogFurnitureItem(410),
        CatalogAnimatedFurnitureItem(490),
        CatalogFurnitureItem(1210),
        CatalogFurnitureItem(1200),
        CatalogFurnitureItem(800),
        CatalogFurnitureItem(1110),
        CatalogFurnitureItem(230),
        CatalogFurnitureItem(420),
        CatalogAnimatedFurnitureItem(480),
        CatalogFurnitureItem(120),
        CatalogFurnitureItem(1700),
        CatalogFurnitureItem(1120),
        CatalogFurnitureItem(430),
        CatalogAnimatedFurnitureItem(491),
        CatalogFurnitureItem(1130),
        CatalogFurnitureItem(130),
        CatalogFurnitureItem(300),
        CatalogFurnitureItem(1220),
        CatalogFurnitureItem(810),
        CatalogFurnitureItem(1230),
        CatalogFurnitureItem(310),
        CatalogFurnitureItem(1240),
        CatalogFurnitureItem(240),
        CatalogFurnitureItem(145),
        CatalogFurnitureItem(1725),
        CatalogFurnitureItem(140),
        CatalogFurnitureItem(950),
        CatalogFurnitureItem(1720)),
    Sale(
        CatalogClothingItem(116, 0),
        CatalogClothingItem(216, 0),
        CatalogClothingItem(408, 0),
        CatalogClothingItem(117, 0),
        CatalogClothingItem(217, 0),
        CatalogClothingItem(409, 0),
        CatalogClothingItem(118, 0),
        CatalogClothingItem(218, 0),
        CatalogClothingItem(410, 0),
        CatalogClothingItem(119, 0),
        CatalogClothingItem(219, 0),
        CatalogClothingItem(120, 0),
        CatalogClothingItem(220, 0),
        CatalogClothingItem(121, 0),
        CatalogClothingItem(221, 0),
        CatalogClothingItem(222, 0),
        CatalogClothingItem(123, 0),
        CatalogClothingItem(224, 0),
        CatalogClothingItem(411, 0),
        CatalogClothingItem(311, 0),
        CatalogClothingItem(310, 0)),
    Sale(
        CatalogWindowItem(40),
        CatalogWindowItem(70),
        CatalogWindowItem(50),
        CatalogWindowItem(60),
        CatalogWindowItem(80),
        CatalogWindowItem(100),
        CatalogWindowItem(90),
        CatalogWindowItem(110)),
    Sale(
        CatalogEmoteItem(5),
        CatalogEmoteItem(9),
        CatalogEmoteItem(13),
        CatalogEmoteItem(11),
        CatalogEmoteItem(6),
        CatalogEmoteItem(8),
        CatalogNametagItem(10)),
    Sale(
        CatalogFurnitureItem(600),
        CatalogFurnitureItem(610),
        CatalogFurnitureItem(620),
        CatalogFurnitureItem(630),
        CatalogFurnitureItem(640),
        CatalogFurnitureItem(650),
        CatalogFurnitureItem(660),
        CatalogFurnitureItem(900),
        CatalogFurnitureItem(910),
        CatalogFurnitureItem(920),
        CatalogFurnitureItem(930),
        CatalogFurnitureItem(940),
        CatalogFurnitureItem(1000),
        CatalogFurnitureItem(1010),
        CatalogFurnitureItem(1020),
        CatalogFurnitureItem(1030),
        CatalogFurnitureItem(1400),
        CatalogFurnitureItem(1410),
        CatalogFurnitureItem(1420),
        CatalogFurnitureItem(1430),
        CatalogFurnitureItem(1440),
        CatalogFurnitureItem(1441),
        CatalogFurnitureItem(1442),
        CatalogFurnitureItem(1443),
        CatalogFurnitureItem(1500),
        CatalogFurnitureItem(1510),
        CatalogFurnitureItem(1520),
        CatalogFurnitureItem(1530),
        CatalogFurnitureItem(1600),
        CatalogFurnitureItem(1610),
        CatalogFurnitureItem(1620),
        CatalogFurnitureItem(1630),
        CatalogFurnitureItem(1640),
        CatalogFurnitureItem(1650),
        CatalogFurnitureItem(1660),
        CatalogFurnitureItem(1661),
        CatalogFurnitureItem(1710),
        CatalogFurnitureItem(1800),
        CatalogFurnitureItem(1810),
        CatalogFurnitureItem(1900),
        CatalogFurnitureItem(1910)),
    (300, (1, 2020),
     (2, 2030),
     (3, 2040),
     CatalogFurnitureItem(730),
     nextAvailablePole),
    (100, (1, 2020),
     (2, 2030),
     (3, 2040),
     CatalogFurnitureItem(260)),
    (300, (1, 2020),
     (2, 2030),
     (3, 2040),
     CatalogFurnitureItem(440),
     CatalogAnimatedFurnitureItem(492),
     5000),
    (100, (1, 2020),
     (2, 2030),
     (3, 2040),
     CatalogFurnitureItem(170),
     CatalogFurnitureItem(1250)),
    (300, (1, 2020),
     (2, 2030),
     (3, 2040),
     CatalogFurnitureItem(1140),
     nextAvailablePole),
    (100, (1, 2020),
     (2, 2030),
     (3, 2040),
     CatalogFurnitureItem(2010),
     CatalogNametagItem(8)),
    (300, (1, 2020),
     (2, 2030),
     (3, 2040),
     CatalogFurnitureItem(2000),
     5000),
    (100, (1, 2020),
     (2, 2030),
     (3, 2040),
     CatalogFurnitureItem(3000)),
    (300, (1, 2030),
     (2, 2040),
     (3, 2050),
     CatalogClothingItem(131, 0),
     CatalogClothingItem(225, 0),
     nextAvailablePole),
    (300, (1, 2030),
     (2, 2040),
     (3, 2050),
     CatalogFurnitureItem(105)),
    (300, (1, 2030),
     (2, 2040),
     (3, 2050),
     CatalogFurnitureItem(205)),
    (300, (1, 2030),
     (2, 2040),
     (3, 2050),
     CatalogFurnitureItem(625)),
    (300, (1, 2030),
     (2, 2040),
     (3, 2050),
     nextAvailablePole, CatalogEmoteItem(12),
     CatalogNametagItem(5)),
    (300, (1, 2030),
     (2, 2040),
     (3, 2050),
     CatalogClothingItem(314, 0),
     CatalogClothingItem(414, 0)),
    (300, (1, 2030),
     (2, 2040),
     (3, 2050),
     CatalogFurnitureItem(715)),
    (300, (1, 2030),
     (2, 2040),
     (3, 2050),
     CatalogFurnitureItem(1015),
     CatalogNametagItem(6)),
    (300, (1, 2030),
     (2, 2040),
     (3, 2050),
     CatalogFurnitureItem(1215),
     nextAvailablePole),
    (300, (1, 2030),
     (2, 2040),
     (3, 2050),
     CatalogEmoteItem(14)),
    (300, (1, 2030),
     (2, 2040),
     (3, 2050),
     CatalogFurnitureItem(1260)),
    (300, (1, 2030),
     (2, 2040),
     (3, 2050),
     CatalogFurnitureItem(705),
     CatalogNametagItem(3)),
    (300, (1, 2030),
     (2, 2040),
     (3, 2050),
     nextAvailablePole))


class CatalogGenerator():
    notify = DirectNotifyGlobal.directNotify.newCategory('CatalogGenerator')

    def __init__(self):
        self.__itemLists = {}
        self.__releasedItemLists = {}

    def getReleasedCatalogList(self, weekStart):
        dayNumber = int(weekStart / (24 * 60))
        itemLists = self.__getReleasedItemLists(dayNumber, weekStart)
        return itemLists

    def generateMonthlyCatalog(self, avatar, weekStart):
        dayNumber = int(weekStart / (24 * 60))
        itemLists = self.__getMonthlyItemLists(dayNumber, weekStart)
        monthlyCatalog = CatalogItemList.CatalogItemList()
        for list in itemLists:
            saleItem = 0
            if isinstance(list, Sale):
                list = list.args
                saleItem = 1
            for item in list:
                monthlyCatalog += self.__selectItem(
                    avatar, item, [], saleItem=saleItem)

        return monthlyCatalog

    def generateWeeklyCatalog(self, avatar, week, monthlyCatalog):
        weeklyCatalog = CatalogItemList.CatalogItemList()
        self.notify.debug(
            'Generating catalog for %s for week %s.' %
            (avatar.doId, week))
        if week >= 1 and week <= len(WeeklySchedule):
            saleItem = 0
            schedule = WeeklySchedule[week - 1]
            if isinstance(schedule, Sale):
                schedule = schedule.args
                saleItem = 1
            for item in schedule:
                weeklyCatalog += self.__selectItem(
                    avatar, item, monthlyCatalog, saleItem=saleItem)

            if nextAvailableCloset not in schedule:
                weeklyCatalog += self.__selectItem(
                    avatar, nextAvailableCloset, monthlyCatalog, saleItem=0)
            weeklyCatalog += self.__selectItem(avatar,
                                               get50ItemTrunk,
                                               monthlyCatalog,
                                               saleItem=0)
        if time.time() < 1096617600.0:

            def hasPetTrick(catalog):
                for item in catalog:
                    if isinstance(item, CatalogPetTrickItem):
                        return 1

                return 0

            if not hasPetTrick(weeklyCatalog) and not hasPetTrick(
                    avatar.weeklyCatalog) and not hasPetTrick(
                    avatar.backCatalog):
                self.notify.debug('Artificially adding pet trick to catalog')
                weeklyCatalog += self.__selectItem(
                    avatar, 5000, monthlyCatalog, saleItem=saleItem)
        self.notify.debug('Generated catalog: %s' % weeklyCatalog)
        return weeklyCatalog

    def generateBackCatalog(self, avatar, week, previousWeek, weeklyCatalog):
        backCatalog = CatalogItemList.CatalogItemList()
        lastBackCatalog = avatar.backCatalog[:]
        thisWeek = min(len(WeeklySchedule), week - 1)
        lastWeek = min(len(WeeklySchedule), previousWeek)
        for week in range(thisWeek, lastWeek, -1):
            self.notify.debug(
                'Adding items from week %s to back catalog' %
                week)
            schedule = WeeklySchedule[week - 1]
            if not isinstance(schedule, Sale):
                for item in schedule:
                    for item in self.__selectItem(
                            avatar, item, weeklyCatalog + backCatalog):
                        item.putInBackCatalog(backCatalog, lastBackCatalog)

        if previousWeek < week:
            self.notify.debug(
                'Adding current items from week %s to back catalog' %
                previousWeek)
            for item in avatar.weeklyCatalog:
                item.putInBackCatalog(backCatalog, lastBackCatalog)

        backCatalog += lastBackCatalog
        for item in weeklyCatalog:
            while item in backCatalog:
                backCatalog.remove(item)

        return backCatalog

    def __getReleasedItemLists(self, dayNumber, weekStart):
        itemLists = self.__releasedItemLists.get(dayNumber)
        if itemLists is not None:
            return itemLists
        self.__releasedItemLists.clear()
        testDaysAhead = config.GetInt('test-server-holiday-days-ahead', 0)
        nowtuple = time.localtime(
            weekStart * 60 + testDaysAhead * 24 * 60 * 60)
        year = nowtuple[0]
        month = nowtuple[1]
        day = nowtuple[2]
        itemLists = []
        for monthlyItems in MonthlySchedule:
            startMM = monthlyItems[0]
            startDD = monthlyItems[1]
            endMM = monthlyItems[2]
            endDD = monthlyItems[3]
            if len(monthlyItems) == 7:
                startYYYY = monthlyItems[4]
                endYYYY = monthlyItems[5]
                list = monthlyItems[6]
            else:
                startYYYY = 1969
                endYYYY = year
                list = monthlyItems[4]
            pastStart = year > startYYYY or year == startYYYY and (
                month > startMM or month == startMM and day >= startDD)
            if pastStart:
                itemLists.append(list)

        self.__releasedItemLists[dayNumber] = itemLists
        return itemLists

    def __getMonthlyItemLists(self, dayNumber, weekStart):
        itemLists = self.__itemLists.get(dayNumber)
        if itemLists is not None:
            return itemLists
        testDaysAhead = config.GetInt('test-server-holiday-days-ahead', 0)
        nowtuple = time.localtime(
            weekStart * 60 + testDaysAhead * 24 * 60 * 60)
        year = nowtuple[0]
        month = nowtuple[1]
        day = nowtuple[2]
        self.notify.debug(
            'Generating seasonal itemLists for %s/%s.' %
            (month, day))
        itemLists = []
        for monthlyItems in MonthlySchedule:
            startMM = monthlyItems[0]
            startDD = monthlyItems[1]
            endMM = monthlyItems[2]
            endDD = monthlyItems[3]
            if len(monthlyItems) == 7:
                startYYYY = monthlyItems[4]
                endYYYY = monthlyItems[5]
                list = monthlyItems[6]
            else:
                startYYYY = 1969
                endYYYY = year
                list = monthlyItems[4]
            pastStart = year >= startYYYY and (
                month > startMM or month == startMM and day >= startDD)
            beforeEnd = year <= endYYYY and (
                month < endMM or month == endMM and day <= endDD)
            if endMM < startMM:
                if pastStart or beforeEnd:
                    itemLists.append(list)
            elif pastStart and beforeEnd:
                itemLists.append(list)

        self.__itemLists[dayNumber] = itemLists
        return itemLists

    def __selectItem(self, avatar, item, duplicateItems, saleItem=0):
        chooseCount = 1
        if isinstance(item, Sale):
            item = item.args[0]
            saleItem = 1
        if callable(item):
            item = item(avatar, duplicateItems)
        if isinstance(item, types.TupleType):
            chooseCount, item = item
        if isinstance(item, types.IntType):
            item = MetaItems[item]
        selection = []
        if isinstance(item, CatalogItem.CatalogItem):
            if not item.notOfferedTo(avatar):
                item.saleItem = saleItem
                selection.append(item)
        elif item is not None:
            list = item[:]
            for i in range(chooseCount):
                if len(list) == 0:
                    return selection
                item = self.__chooseFromList(avatar, list, duplicateItems)
                if item is not None:
                    item.saleItem = saleItem
                    selection.append(item)

        return selection

    def __chooseFromList(self, avatar, list, duplicateItems):
        index = random.randrange(len(list))
        item = list[index]
        del list[index]
        while item.notOfferedTo(avatar) or item.reachedPurchaseLimit(
                avatar) or item in duplicateItems or item in avatar.backCatalog or item in avatar.weeklyCatalog:
            if len(list) == 0:
                return None
            index = random.randrange(len(list))
            item = list[index]
            del list[index]

        return item

    def outputSchedule(self, filename):
        out = open(Filename(filename).toOsSpecific(), 'w')
        sched = self.generateScheduleDictionary()
        items = sorted(sched.keys())
        for item in items:
            weeklist, maybeWeeklist = sched[item]
            color = self.__formatColor(item.getColor())
            seriesDict = {}
            self.__determineSeries(seriesDict, weeklist)
            self.__determineSeries(seriesDict, maybeWeeklist)
            seriesList = sorted(seriesDict.keys())
            series = str(seriesList)[1:-1]
            week = self.__formatWeeklist(weeklist)
            maybeWeek = self.__formatWeeklist(maybeWeeklist)
            line = '"%s"\t"%s"\t"%s"\t%s\t"%s"\t"%s"\t"%s"\t"%s"\t"%s"' % (
                item.output(store=0),
                item.getTypeName(),
                item.getDisplayName(),
                item.getBasePrice(),
                item.getFilename(),
                color, series, week, maybeWeek)
            out.write(line + '\n')

        out.close()

    def __formatColor(self, color):
        if color is None:
            return ''
        else:
            return '(%0.2f, %0.2f, %0.2f)' % (color[0], color[1], color[2])

    def __determineSeries(self, seriesDict, weeklist):
        for week in weeklist:
            if isinstance(week, types.IntType):
                series = (
                    week - 1) / ToontownGlobals.CatalogNumWeeksPerSeries + 1
                seriesDict[series] = None

    def __formatWeeklist(self, weeklist):
        str = ''
        for week in weeklist:
            str += ', %s' % week

        return str[2:]

    def generateScheduleDictionary(self):
        sched = {}
        for index in range(len(WeeklySchedule)):
            week = index + 1
            schedule = WeeklySchedule[index]
            if isinstance(schedule, Sale):
                schedule = schedule.args
            self.__recordSchedule(sched, week, schedule)

        for monthlyItems in MonthlySchedule:
            startMM = monthlyItems[0]
            startDD = monthlyItems[1]
            endMM = monthlyItems[2]
            endDD = monthlyItems[3]
            if len(monthlyItems) == 7:
                list = monthlyItems[6]
            else:
                list = monthlyItems[4]
            string = '%02d/%02d - %02d/%02d' % (startMM,
                                                startDD,
                                                endMM,
                                                endDD)
            self.__recordSchedule(sched, string, list)

        return sched

    def __recordSchedule(self, sched, weekCode, schedule):
        if isinstance(schedule, Sale):
            schedule = schedule.args
        for item in schedule:
            if callable(item):
                if item == nextAvailablePole:
                    item = getAllPoles()
                elif item == nextAvailableCloset:
                    item = getAllClosets()
                elif item == get50ItemCloset:
                    item = getMaxClosets()
                elif item == get50ItemTrunk:
                    item = getMaxTrunks()
                else:
                    self.notify.warning(
                        "Don't know how to interpret function " %
                        repr(name))
                    item = None
            elif isinstance(item, types.TupleType):
                item = item[1]
            if isinstance(item, types.IntType):
                item = MetaItems[item]
            if isinstance(item, CatalogItem.CatalogItem):
                self.__recordScheduleItem(sched, weekCode, None, item)
            elif item is not None:
                for i in item:
                    self.__recordScheduleItem(sched, None, weekCode, i)

    def __recordScheduleItem(self, sched, weekCode, maybeWeekCode, item):
        if item not in sched:
            sched[item] = [[], []]
        if weekCode is not None:
            sched[item][0].append(weekCode)
        if maybeWeekCode is not None:
            sched[item][1].append(maybeWeekCode)
