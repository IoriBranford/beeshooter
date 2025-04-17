#include "types.h"
#include "maths.h"

const fix16 tantab_f16[256] = {
    FIX16(0.0),
    FIX16(0.006136000157623402),
    FIX16(0.012272462379566276),
    FIX16(0.018409848869339426),
    FIX16(0.024548622108925444),
    FIX16(0.03068924499823746),
    FIX16(0.036832180994845636),
    FIX16(0.04297789425406108),
    FIX16(0.049126849769467254),
    FIX16(0.05527951351398948),
    FIX16(0.06143635258159376),
    FIX16(0.0675978353297067),
    FIX16(0.07376443152244928),
    FIX16(0.07993661247477798),
    FIX16(0.0861148511976279),
    FIX16(0.09229962254415357),
    FIX16(0.09849140335716425),
    FIX16(0.10469067261785214),
    FIX16(0.11089791159591302),
    FIX16(0.1171136040011608),
    FIX16(0.12333823613673868),
    FIX16(0.1295722970540317),
    FIX16(0.1358162787093877),
    FIX16(0.14207067612275492),
    FIX16(0.14833598753834742),
    FIX16(0.15461271458745154),
    FIX16(0.16090136245348918),
    FIX16(0.16720244003945597),
    FIX16(0.17351646013785577),
    FIX16(0.17984393960325487),
    FIX16(0.1861853995275837),
    FIX16(0.1925413654183159),
    FIX16(0.198912367379658),
    FIX16(0.20529894029688808),
    FIX16(0.21170162402398335),
    FIX16(0.2181209635746821),
    FIX16(0.2245575093171293),
    FIX16(0.2310118171722587),
    FIX16(0.23748444881607017),
    FIX16(0.24397597188596482),
    FIX16(0.25048696019130545),
    FIX16(0.25701799392837593),
    FIX16(0.263569659899918),
    FIX16(0.2701425517394293),
    FIX16(0.27673727014041427),
    FIX16(0.28335442309078374),
    FIX16(0.2899946261126061),
    FIX16(0.2966585025074228),
    FIX16(0.3033466836073424),
    FIX16(0.3100598090321415),
    FIX16(0.3167985269526038),
    FIX16(0.3235634943603391),
    FIX16(0.33035537734433396),
    FIX16(0.33717485137449055),
    FIX16(0.3440226015924263),
    FIX16(0.3508993231098097),
    FIX16(0.3578057213145241),
    FIX16(0.3647425121849595),
    FIX16(0.37171042261274345),
    FIX16(0.3787101907342352),
    FIX16(0.3857425662711212),
    FIX16(0.39280831088045937),
    FIX16(0.3999081985145372),
    FIX16(0.4070430157909219),
    FIX16(0.41421356237309503),
    FIX16(0.4214206513620817),
    FIX16(0.4286651096994995),
    FIX16(0.43594777858247147),
    FIX16(0.44326951389086433),
    FIX16(0.4506311866273328),
    FIX16(0.4580336833706724),
    FIX16(0.4654779067430017),
    FIX16(0.4729647758913199),
    FIX16(0.48049522698400765),
    FIX16(0.48807021372286286),
    FIX16(0.4956907078712909),
    FIX16(0.5033576997992942),
    FIX16(0.5110721990459353),
    FIX16(0.5188352348999757),
    FIX16(0.526647856999429),
    FIX16(0.5345111359507916),
    FIX16(0.5424261639687593),
    FIX16(0.550394055537264),
    FIX16(0.5584159480927127),
    FIX16(0.566493002730344),
    FIX16(0.5746264049346655),
    FIX16(0.5828173653349761),
    FIX16(0.5910671204870267),
    FIX16(0.5993769336819237),
    FIX16(0.6077480957834287),
    FIX16(0.616181926094866),
    FIX16(0.6246797732569084),
    FIX16(0.6332430161775691),
    FIX16(0.6418730649957994),
    FIX16(0.6505713620801533),
    FIX16(0.659339383064057),
    FIX16(0.6681786379192989),
    FIX16(0.6770906720694306),
    FIX16(0.6860770675448629),
    FIX16(0.6951394441815232),
    FIX16(0.7042794608650442),
    FIX16(0.713498816822549),
    FIX16(0.7227992529642059),
    FIX16(0.7321825532768441),
    FIX16(0.7416505462720354),
    FIX16(0.7512051064911773),
    FIX16(0.7608481560702512),
    FIX16(0.7705816663670643),
    FIX16(0.7804076596539435),
    FIX16(0.7903282108790088),
    FIX16(0.8003454494993201),
    FIX16(0.8104615613893791),
    FIX16(0.8206787908286604),
    FIX16(0.8309994425720446),
    FIX16(0.8414258840072547),
    FIX16(0.8519605474036193),
    FIX16(0.8626059322567399),
    FIX16(0.873364607733903),
    FIX16(0.8842392152253498),
    FIX16(0.8952324710068263),
    FIX16(0.906347169019147),
    FIX16(0.917586183770848),
    FIX16(0.9289524733703675),
    FIX16(0.9404490826945808),
    FIX16(0.9520791467009252),
    FIX16(0.9638458938907974),
    FIX16(0.9757526499323765),
    FIX16(0.9878028414515292),
    FIX16(0.9999999999999999),
    FIX16(1.0123477662106617),
    FIX16(1.0248498941502273),
    FIX16(1.037510255880489),
    FIX16(1.0503328462398598),
    FIX16(1.0633217878577683),
    FIX16(1.0764813364152659),
    FIX16(1.0898158861661036),
    FIX16(1.1033299757334758),
    FIX16(1.1170282941986525),
    FIX16(1.130915687498827),
    FIX16(1.1449971651526785),
    FIX16(1.1592779073334345),
    FIX16(1.1737632723105973),
    FIX16(1.1884588042829665),
    FIX16(1.203370241627212),
    FIX16(1.2185035255879764),
    FIX16(1.2338648094373457),
    FIX16(1.2494604681335786),
    FIX16(1.2652971085111493),
    FIX16(1.2813815800365544),
    FIX16(1.2977209861669001),
    FIX16(1.31432269635108),
    FIX16(1.3311943587163895),
    FIX16(1.34834391348672),
    FIX16(1.3657796071820518),
    FIX16(1.3835100076528737),
    FIX16(1.4015440200074014),
    FIX16(1.4198909034940923),
    FIX16(1.4385602894070098),
    FIX16(1.4575622000871054),
    FIX16(1.476907069098505),
    FIX16(1.496605762665489),
    FIX16(1.5166696024630557),
    FIX16(1.5371103898618816),
    FIX16(1.557940431737144),
    FIX16(1.5791725679602087),
    FIX16(1.6008202007026335),
    FIX16(1.6228973256934547),
    FIX16(1.6454185655833802),
    FIX16(1.668399205583507),
    FIX16(1.6918552315615547),
    FIX16(1.715803370795664),
    FIX16(1.7402611356046176),
    FIX16(1.7652468700941912),
    FIX16(1.7907798002824444),
    FIX16(1.8168800878924019),
    FIX16(1.8435688881290653),
    FIX16(1.8708684117893888),
    FIX16(1.898801992089155),
    FIX16(1.9273941566300643),
    FIX16(1.9566707049743473),
    FIX16(1.986658792343365),
    FIX16(2.0173870200117934),
    FIX16(2.0488855330307496),
    FIX16(2.0811861259826476),
    FIX16(2.11432235754864),
    FIX16(2.1483296747575107),
    FIX16(2.1832455478841513),
    FIX16(2.219109617078033),
    FIX16(2.2559638519291587),
    FIX16(2.2938527253232066),
    FIX16(2.33282340310135),
    FIX16(2.3729259512268346),
    FIX16(2.414213562373095),
    FIX16(2.4567428040913764),
    FIX16(2.5005738909942563),
    FIX16(2.5457709837109905),
    FIX16(2.5924025177380714),
    FIX16(2.6405415657318883),
    FIX16(2.6902662372796136),
    FIX16(2.7416601207508924),
    FIX16(2.7948127724904768),
    FIX16(2.8498202593769673),
    FIX16(2.9067857616655353),
    FIX16(2.96582024407665),
    FIX16(3.0270432043177733),
    FIX16(3.090583509666086),
    FIX16(3.1565803339407874),
    FIX16(3.2251842092063505),
    FIX16(3.296558208938321),
    FIX16(3.3708792822311873),
    FIX16(3.4483397620330245),
    FIX16(3.5291490744776928),
    FIX16(3.613535681307428),
    FIX16(3.701749293330757),
    FIX16(3.7940634000883002),
    FIX16(3.890778169713179),
    FIX16(3.9922237837700827),
    FIX16(4.098764285146091),
    FIX16(4.210802033502797),
    FIX16(4.32878288323376),
    FIX16(4.453202224414412),
    FIX16(4.584612059342986),
    FIX16(4.723629327882301),
    FIX16(4.870945746499587),
    FIX16(5.027339492125846),
    FIX16(5.193689147406828),
    FIX16(5.370990435003726),
    FIX16(5.560376414162477),
    FIX16(5.763142005118804),
    FIX16(5.980773963370521),
    FIX16(6.2149877710890395),
    FIX16(6.46777338246903),
    FIX16(6.7414524054149885),
    FIX16(7.038750200188802),
    FIX16(7.362887641324242),
    FIX16(7.71769909723063),
    FIX16(8.107785803676903),
    FIX16(8.538717671006754),
    FIX16(9.017302360424724),
    FIX16(9.55194932838244),
    FIX16(10.153170387608842),
    FIX16(10.834280492551615),
    FIX16(11.612398861435247),
    FIX16(12.509912154652852),
    FIX16(13.55666924235242),
    FIX16(14.793373117978184),
    FIX16(16.27700795993539),
    FIX16(18.089884234363428),
    FIX16(20.355467624987142),
    FIX16(23.26777561712448),
    FIX16(27.15017066569958),
    FIX16(32.5847051648691),
    FIX16(40.73548387208334),
    FIX16(54.31875118026874),
    FIX16(81.48324020654604),
    FIX16(162.9726164132489),
};