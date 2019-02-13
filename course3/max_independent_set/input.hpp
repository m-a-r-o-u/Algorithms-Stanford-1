/*

In this programming problem you'll code up the dynamic programming algorithm
for computing a maximum-weight independent set of a path graph.

Download the text file below.

This file describes the weights of the vertices in a path graph (with the weights listed in the order
in which vertices appear in the path). It has the following format:

[number_of_vertices]

[weight of first vertex]

[weight of second vertex]

...

For example, the third line of the file is "6395702,"
indicating that the weight of the second vertex of the graph is 6395702.

Your task in this problem is to run the dynamic programming algorithm (and the reconstruction procedure)
from lecture on this data set. The question is: of the vertices 1, 2, 3, 4, 17, 117, 517, and 997,
which ones belong to the maximum-weight independent set? (By "vertex 1" we mean the first vertex of the graph
--there is no vertex 0.) In the box below, enter a 8-bit string,
where the ith bit should be 1 if the ith of these 8 vertices is in the maximum-weight independent set,
and 0 otherwise. For example, if you think that the vertices 1, 4, 17, and 517 are in the maximum-weight independent set
and the other four vertices are not, then you should enter the string 10011010 in the box below.

*/


#pragma once


#include <string>


namespace Lecture
{
    const std::string Input
    {
R"(1
4
5
4
)"
    }; // const std::string Input

} // namespace Lecture


namespace Assignment
{
    const std::string Input
    {
R"(4962786
6395702
5601590
3803402
6784626
4944482
2882725
9310662
5247184
9819854
8398364
1470063
4199696
4623136
8160902
930850
3889157
8211214
6560984
8835416
3024392
3286693
736791
3862790
1420652
9767464
6093772
2133393
358615
4537366
6655609
5551123
9039549
469060
304701
5768649
1339317
8421671
513661
6792447
3944383
4692731
4614391
9344708
4169702
4345210
9744699
9407222
6480402
7985130
4407746
4040958
7960851
5394516
4024926
6784072
1710864
6886941
7495555
5654086
2481292
8892684
2186179
1539792
1828698
4741356
3476859
327340
7634220
808031
5101226
6958744
1511709
7231864
7447240
778642
3120423
1098518
6450468
399546
7275028
1081427
7154897
2804344
9440402
2909959
2686145
5099515
3776057
5765944
8935025
6477008
3490890
1691564
2225172
8510419
9788522
9484150
7236748
7334350
3501364
443073
3839984
511778
5938948
8542395
998674
307072
3068204
9908539
4675871
8958494
713730
489163
2908154
5500103
7463231
4256879
801111
1312026
3383096
9677883
6972318
9812223
2680217
1777191
7197988
8155531
1762267
256812
4319070
9635141
9583155
3250694
149904
9722955
6836491
5998739
7077631
2905680
8047743
5398820
5327949
8262028
6446657
6945815
5201088
1818890
3455395
2094958
1387816
73296
5562568
4138240
7411620
3236316
3526603
2889306
5881661
9746189
295106
1140760
567794
8971262
8092826
6178363
6493070
5307905
3151323
9430583
5945625
2591187
4762105
1419485
7975274
6200869
3747595
3496996
5533979
4881997
6326981
6530568
6491735
1433394
5656371
8268622
4897856
2245483
1669874
7743046
3840061
1703393
6096353
3282159
4065018
6008865
3662040
440417
6320312
9523490
6583500
1674269
6902908
8718923
4953838
4492172
1406910
7453747
9251820
1368416
9781274
8913978
1395947
5304262
2437936
9096011
368065
6977113
305541
7998419
9113264
932390
5948936
3610392
6452644
7392634
4319886
9125467
2520028
7543480
1811018
4099447
4892952
7597021
8361800
6314060
4059634
3125308
3192850
9152613
1306872
3292977
9560779
9488831
9009343
5026364
1010852
1545256
8623793
5644518
2948787
3809130
2673396
2060852
2653718
4176196
1615904
8461567
46747
1206954
7220207
9171602
3338565
3061384
9674051
2510050
382009
247219
6002436
1003287
9988055
3041426
8936322
7452194
405922
998911
9382240
4249228
9221427
4650092
1772513
2816258
8258398
1476303
320865
6700891
8695236
1180251
9260565
6330678
3891892
7567141
2845081
7192332
5252074
9132808
9208518
2096326
342578
8349742
3159129
4205011
638307
71223
4872024
4912458
2849051
4781804
6261562
7290515
5007673
7458434
4013763
8550805
8008820
2813461
2055878
7657837
7385240
4792029
7538175
5131101
9006068
3337699
9317035
1481292
8231505
9487483
3345098
449245
453983
5589565
7292106
2703366
5298881
4515612
1256237
2222110
2684520
7701606
7853799
1194554
7851668
2444712
2930373
1936058
4295952
889562
7390238
1844735
8371775
1735214
6206412
3559345
6812846
1985125
1791905
728358
7230264
428268
7286935
372152
69051
762807
8510926
2815300
9983039
3209564
6777024
4992085
2890580
562039
9194719
3176970
7526657
3493083
7967410
8786315
4059864
6382237
7073152
7545693
6431229
1028498
5789973
8113571
7564283
5817713
6832277
5002565
2265208
438557
1757079
230881
8495104
5103307
7420851
4180422
7270131
1905337
1475037
9123930
9028159
4990449
2384686
9696856
3007692
8297118
211151
5438779
939934
840794
4164074
8027683
9922110
1912779
6026895
3157619
928339
4618770
7990617
6364128
1665428
2032576
4278982
6100265
6916991
3385276
1620451
4938346
6242748
2804263
7464822
4556996
5035925
2753070
1992856
8716085
9036144
2277153
8453661
4998172
5797542
367000
950156
5886760
8153903
5106830
9327140
4457455
5022044
3052347
966685
5172349
2728196
114135
114631
950795
5526943
8218003
4491994
7829474
2789301
5316357
4262939
9673787
9578536
2523410
506950
4693798
9940156
6942521
4182321
5383012
4860281
8370920
7573431
7768171
3221024
136106
3558236
1532053
3539310
2559342
5062808
2759619
1745360
7119640
2321292
61658
3124538
7173906
2308870
7978139
6890041
6990701
9148722
7011840
1004792
8528187
3401861
2686816
5880479
4738654
8779826
3521280
2432159
6727447
7812233
6665980
8840860
8512364
3689400
7355420
3122714
5805153
5906419
2998226
9406986
5651526
7543317
972976
3346751
3019685
8516433
258788
6865579
7756334
9451512
9182658
8428446
6755965
4586583
7925989
1750013
1012874
9879336
383953
8490296
8428185
2060982
8463641
7064392
3495414
6781287
2006763
3411676
8172818
8583986
9299153
5452259
2107695
4570801
5699991
8274500
7659330
3933403
5088705
1593520
2318532
800976
5025027
7639122
1046031
792737
5459182
1592753
2170890
9789466
5809494
7911061
2539029
8128492
6194946
8695485
9659426
3269288
2485303
7917729
8230758
8239170
2859339
6147337
8804366
25181
2859231
5697800
5916890
198723
1295416
6001047
9065735
3209019
6034946
1731523
7530638
4911295
4227646
8017018
9172125
5472593
8707393
4662570
4188377
3616500
5372731
2963776
5781540
547771
6944907
4830030
3204711
9652058
3214849
8558645
1198566
5762344
6891881
1340276
4572263
9330449
1512284
9286625
4875144
3487144
456312
3686685
8103846
1473723
8969048
1880736
1759826
2660009
6476439
4195665
1902918
6541154
3688474
9839555
6651494
7451271
2178417
1800904
3486131
7961262
6080960
5622791
2353468
6091491
3704395
5007227
9766820
7489731
8204534
653479
9716090
3198448
9407622
5800774
2047472
2054300
2404336
8797243
8880009
942131
6609608
5630020
1811483
9775730
190668
9154330
5814438
2349137
87075
377384
8265014
6235364
1268556
3993536
1315177
2978348
6866975
7192230
9097204
1508552
8389823
4418343
3207064
3228001
9060408
2572469
4556887
772937
569691
8870161
8748666
5320607
591676
6746779
3049333
1098005
3201215
3678652
6987296
703728
9091928
7137459
7851264
8679414
5073340
2800891
3549720
6492278
7347897
8150917
9072915
9901590
2598922
4927088
1765561
738823
6527609
8488766
2377259
1736305
5587018
2342320
6319258
9326385
9725092
3708463
1751982
8413788
2812497
6931514
8034607
7712963
1665201
5604160
2580404
8580377
3987517
6994034
3461720
9023568
3001914
3162591
4862158
5506641
8098537
3719415
5423946
3462891
2006838
5950531
6884423
5895826
1687977
7296380
8527160
579056
929868
6727615
2911321
1839652
9883242
4019779
9351955
1506017
8878831
4904090
1116317
2857737
6748923
3853755
9070989
6055928
8495836
3285325
1291712
3948504
598342
1281879
3452434
811454
55155
69666
9746527
8211717
8216491
2913751
841852
6067475
4500451
4812117
9506317
4721179
3430293
8096704
2169682
8080867
959158
6986191
6230108
1518225
9144943
4276108
668735
7066824
5485477
6897681
9606419
411948
4773096
257689
5166916
1026383
3757232
6403261
120660
8418961
751193
4319181
1258900
7066471
5834556
9970511
694730
9718714
3113979
1798400
8577364
967966
7761512
5987361
1298629
9751177
2374549
4800917
6048397
3881601
5413145
9343996
5041981
568535
8439155
438409
776396
8795136
9114404
6175501
9079829
6773121
8172102
9880452
373909
2155676
2182504
5579551
7656805
9861114
4136374
8786839
9617640
5277095
8455766
5737131
8045592
4790400
5646144
6598950
7695887
9387672
907962
957241
7359468
5934152
8620600
130133
4298771
8000946
9967304
9170262
4052754
3583496
6095556
3813728
8025242
5871565
6064143
5217101
7327965
2436132
3590119
931544
9765838
7736249
7028875
2828882
3744219
2038808
2208794
4519737
2901376
5151574
875323
7820979
2271532
5310716
4816325
6083796
2704672
7885209
2415433
3888095
3656551
3210487
3509308
5685228
2198490
1967673
1415527
2866735
9860515
3046505
3877183
6102348
2798277
5699538
2173325
1628328
5033001
4046418
5181215
8111653
7485814
5485629
6017894
3702841
4723312
5279763
4548119
1076239
2571841
1033405
9934376
9360558
2683831
2755130
5472163
1640750
6639786
8304816
4736842
718355
8029910
3933803
6141288
3957342
1258240
758402
6150115
4312581
7783453
9346578
9585654
2180358
2487797
8664854
3572216
8748977
5218044
2273780
8092203
8420778
7982179
8496968
3197929
6429917
4356919
5303666
210350
8520887
7263348
4287969
9630021
9990728
8455483
5433316
4773035
8432976
3312796
2431648
8237261
9628820
1399389
7546051
8594344
3304589
6911311
)"
    }; // const std::string

} // namespace Assignment
