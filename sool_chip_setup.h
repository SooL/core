//##############################################################################
//#                                 F0  Series                                 #
//##############################################################################
//#define STM32F030x4
//#define STM32F030x6
//#define STM32F030x8
//#define STM32F030xC
//#define STM32F031x6
//#define STM32F038xx
//#define STM32F042x6
//#define STM32F048xx
//#define STM32F051x8
//#define STM32F058xx
//#define STM32F070x6
//#define STM32F070xB
//#define STM32F071xB
//#define STM32F072xB
//#define STM32F078xx
//#define STM32F091xC
//#define STM32F098xx

// ---- STM32F0 definition ----
#define __SOOL_NB_STM32F0\
	defined(STM32F030x4 ) + defined(STM32F030x6 ) + defined(STM32F030x8 ) +\
	defined(STM32F030xC ) + defined(STM32F031x6 ) + defined(STM32F038xx ) +\
	defined(STM32F042x6 ) + defined(STM32F048xx ) + defined(STM32F051x8 ) +\
	defined(STM32F058xx ) + defined(STM32F070x6 ) + defined(STM32F070xB ) +\
	defined(STM32F071xB ) + defined(STM32F072xB ) + defined(STM32F078xx ) +\
	defined(STM32F091xC ) + defined(STM32F098xx )
#if __SOOL_NB_STM32F0 > 1
#error only one chip must be defined
#elif __SOOL_NB_STM32F0 == 1
#define STM32F0
// ---- STM32F0 sub-series ----
#if		defined(STM32F030x4 ) || defined(STM32F030x6 ) || defined(STM32F030x8 ) ||\
		defined(STM32F030xC )
#define STM32F030
#elif	defined(STM32F031x6 )
#define STM32F031
#elif	defined(STM32F038xx )
#define STM32F038
#elif	defined(STM32F042x6 )
#define STM32F042
#elif	defined(STM32F048xx )
#define STM32F048
#elif	defined(STM32F051x8 )
#define STM32F051
#elif	defined(STM32F058xx )
#define STM32F058
#elif	defined(STM32F070x6 ) || defined(STM32F070xB )
#define STM32F070
#elif	defined(STM32F071xB )
#define STM32F071
#elif	defined(STM32F072xB )
#define STM32F072
#elif	defined(STM32F078xx )
#define STM32F078
#elif	defined(STM32F091xC )
#define STM32F091
#elif	defined(STM32F098xx )
#define STM32F098
#endif
#if		defined(STM32F030   ) || defined(STM32F031   ) || defined(STM32F038   )
#define STM32F03x
#elif	defined(STM32F042   ) || defined(STM32F048   )
#define STM32F04x
#elif	defined(STM32F051   ) || defined(STM32F058   )
#define STM32F05x
#elif	defined(STM32F070   ) || defined(STM32F071   ) || defined(STM32F072   ) ||\
		defined(STM32F078   )
#define STM32F07x
#elif	defined(STM32F091   ) || defined(STM32F098   )
#define STM32F09x
#endif
#if		defined(STM32F030   ) || defined(STM32F070   )
#define STM32F0x0
#elif	defined(STM32F031   ) || defined(STM32F051   ) || defined(STM32F071   ) ||\
		defined(STM32F091   )
#define STM32F0x1
#elif	defined(STM32F038   ) || defined(STM32F048   ) || defined(STM32F058   ) ||\
		defined(STM32F078   ) || defined(STM32F098   )
#define STM32F0x8
#elif	defined(STM32F042   ) || defined(STM32F072   )
#define STM32F0x2
#endif
#endif
//##############################################################################
//#                                 F1  Series                                 #
//##############################################################################
//#define STM32F100xB
//#define STM32F100xE
//#define STM32F101x6
//#define STM32F101xB
//#define STM32F101xE
//#define STM32F101xG
//#define STM32F102x6
//#define STM32F102xB
//#define STM32F103x6
//#define STM32F103xB
//#define STM32F103xE
//#define STM32F103xG
//#define STM32F105xC
//#define STM32F107xC

// ---- STM32F1 definition ----
#define __SOOL_NB_STM32F1\
	defined(STM32F100xB ) + defined(STM32F100xE ) + defined(STM32F101x6 ) +\
	defined(STM32F101xB ) + defined(STM32F101xE ) + defined(STM32F101xG ) +\
	defined(STM32F102x6 ) + defined(STM32F102xB ) + defined(STM32F103x6 ) +\
	defined(STM32F103xB ) + defined(STM32F103xE ) + defined(STM32F103xG ) +\
	defined(STM32F105xC ) + defined(STM32F107xC )
#if __SOOL_NB_STM32F1 > 1
#error only one chip must be defined
#elif __SOOL_NB_STM32F1 == 1
#define STM32F1
// ---- STM32F1 sub-series ----
#if		defined(STM32F100xB ) || defined(STM32F100xE )
#define STM32F100
#elif	defined(STM32F101x6 ) || defined(STM32F101xB ) || defined(STM32F101xE ) ||\
		defined(STM32F101xG )
#define STM32F101
#elif	defined(STM32F102x6 ) || defined(STM32F102xB )
#define STM32F102
#elif	defined(STM32F103x6 ) || defined(STM32F103xB ) || defined(STM32F103xE ) ||\
		defined(STM32F103xG )
#define STM32F103
#elif	defined(STM32F105xC )
#define STM32F105
#elif	defined(STM32F107xC )
#define STM32F107
#endif
#if		defined(STM32F100   ) || defined(STM32F101   ) || defined(STM32F102   ) ||\
		defined(STM32F103   ) || defined(STM32F105   ) || defined(STM32F107   )
#define STM32F10x
#endif
#if		defined(STM32F100   )
#define STM32F1x0
#elif	defined(STM32F101   )
#define STM32F1x1
#elif	defined(STM32F102   )
#define STM32F1x2
#elif	defined(STM32F103   )
#define STM32F1x3
#elif	defined(STM32F105   )
#define STM32F1x5
#elif	defined(STM32F107   )
#define STM32F1x7
#endif
#endif
//##############################################################################
//#                                 F2  Series                                 #
//##############################################################################
//#define STM32F205xx
//#define STM32F207xx
//#define STM32F215xx
//#define STM32F217xx

// ---- STM32F2 definition ----
#define __SOOL_NB_STM32F2\
	defined(STM32F205xx ) + defined(STM32F207xx ) + defined(STM32F215xx ) +\
	defined(STM32F217xx )
#if __SOOL_NB_STM32F2 > 1
#error only one chip must be defined
#elif __SOOL_NB_STM32F2 == 1
#define STM32F2
// ---- STM32F2 sub-series ----
#if		defined(STM32F205xx )
#define STM32F205
#elif	defined(STM32F207xx )
#define STM32F207
#elif	defined(STM32F215xx )
#define STM32F215
#elif	defined(STM32F217xx )
#define STM32F217
#endif
#if		defined(STM32F205   ) || defined(STM32F207   )
#define STM32F20x
#elif	defined(STM32F215   ) || defined(STM32F217   )
#define STM32F21x
#endif
#if		defined(STM32F205   ) || defined(STM32F215   )
#define STM32F2x5
#elif	defined(STM32F207   ) || defined(STM32F217   )
#define STM32F2x7
#endif
#endif
//##############################################################################
//#                                 F3  Series                                 #
//##############################################################################
//#define STM32F301x8
//#define STM32F302x8
//#define STM32F302xC
//#define STM32F302xE
//#define STM32F303x8
//#define STM32F303xC
//#define STM32F303xE
//#define STM32F318xx
//#define STM32F328xx
//#define STM32F334x8
//#define STM32F358xx
//#define STM32F373xC
//#define STM32F378xx
//#define STM32F398xx

// ---- STM32F3 definition ----
#define __SOOL_NB_STM32F3\
	defined(STM32F301x8 ) + defined(STM32F302x8 ) + defined(STM32F302xC ) +\
	defined(STM32F302xE ) + defined(STM32F303x8 ) + defined(STM32F303xC ) +\
	defined(STM32F303xE ) + defined(STM32F318xx ) + defined(STM32F328xx ) +\
	defined(STM32F334x8 ) + defined(STM32F358xx ) + defined(STM32F373xC ) +\
	defined(STM32F378xx ) + defined(STM32F398xx )
#if __SOOL_NB_STM32F3 > 1
#error only one chip must be defined
#elif __SOOL_NB_STM32F3 == 1
#define STM32F3
// ---- STM32F3 sub-series ----
#if		defined(STM32F301x8 )
#define STM32F301
#elif	defined(STM32F302x8 ) || defined(STM32F302xC ) || defined(STM32F302xE )
#define STM32F302
#elif	defined(STM32F303x8 ) || defined(STM32F303xC ) || defined(STM32F303xE )
#define STM32F303
#elif	defined(STM32F318xx )
#define STM32F318
#elif	defined(STM32F328xx )
#define STM32F328
#elif	defined(STM32F334x8 )
#define STM32F334
#elif	defined(STM32F358xx )
#define STM32F358
#elif	defined(STM32F373xC )
#define STM32F373
#elif	defined(STM32F378xx )
#define STM32F378
#elif	defined(STM32F398xx )
#define STM32F398
#endif
#if		defined(STM32F301   ) || defined(STM32F302   ) || defined(STM32F303   )
#define STM32F30x
#elif	defined(STM32F318   )
#define STM32F31x
#elif	defined(STM32F328   )
#define STM32F32x
#elif	defined(STM32F334   )
#define STM32F33x
#elif	defined(STM32F358   )
#define STM32F35x
#elif	defined(STM32F373   ) || defined(STM32F378   )
#define STM32F37x
#elif	defined(STM32F398   )
#define STM32F39x
#endif
#if		defined(STM32F301   )
#define STM32F3x1
#elif	defined(STM32F302   )
#define STM32F3x2
#elif	defined(STM32F303   ) || defined(STM32F373   )
#define STM32F3x3
#elif	defined(STM32F318   ) || defined(STM32F328   ) || defined(STM32F358   ) ||\
		defined(STM32F378   ) || defined(STM32F398   )
#define STM32F3x8
#elif	defined(STM32F334   )
#define STM32F3x4
#endif
#endif
//##############################################################################
//#                                 F4  Series                                 #
//##############################################################################
//#define STM32F401xC
//#define STM32F401xE
//#define STM32F405xx
//#define STM32F407xx
//#define STM32F410Cx
//#define STM32F410Rx
//#define STM32F410Tx
//#define STM32F411xE
//#define STM32F412Cx
//#define STM32F412Rx
//#define STM32F412Vx
//#define STM32F412Zx
//#define STM32F413xx
//#define STM32F415xx
//#define STM32F417xx
//#define STM32F423xx
//#define STM32F427xx
//#define STM32F429xx
//#define STM32F437xx
//#define STM32F439xx
//#define STM32F446xx
//#define STM32F469xx
//#define STM32F479xx

// ---- STM32F4 definition ----
#define __SOOL_NB_STM32F4\
	defined(STM32F401xC ) + defined(STM32F401xE ) + defined(STM32F405xx ) +\
	defined(STM32F407xx ) + defined(STM32F410Cx ) + defined(STM32F410Rx ) +\
	defined(STM32F410Tx ) + defined(STM32F411xE ) + defined(STM32F412Cx ) +\
	defined(STM32F412Rx ) + defined(STM32F412Vx ) + defined(STM32F412Zx ) +\
	defined(STM32F413xx ) + defined(STM32F415xx ) + defined(STM32F417xx ) +\
	defined(STM32F423xx ) + defined(STM32F427xx ) + defined(STM32F429xx ) +\
	defined(STM32F437xx ) + defined(STM32F439xx ) + defined(STM32F446xx ) +\
	defined(STM32F469xx ) + defined(STM32F479xx )
#if __SOOL_NB_STM32F4 > 1
#error only one chip must be defined
#elif __SOOL_NB_STM32F4 == 1
#define STM32F4
// ---- STM32F4 sub-series ----
#if		defined(STM32F401xC ) || defined(STM32F401xE )
#define STM32F401
#elif	defined(STM32F405xx )
#define STM32F405
#elif	defined(STM32F407xx )
#define STM32F407
#elif	defined(STM32F410Cx ) || defined(STM32F410Rx ) || defined(STM32F410Tx )
#define STM32F410
#elif	defined(STM32F411xE )
#define STM32F411
#elif	defined(STM32F412Cx ) || defined(STM32F412Rx ) || defined(STM32F412Vx ) ||\
		defined(STM32F412Zx )
#define STM32F412
#elif	defined(STM32F413xx )
#define STM32F413
#elif	defined(STM32F415xx )
#define STM32F415
#elif	defined(STM32F417xx )
#define STM32F417
#elif	defined(STM32F423xx )
#define STM32F423
#elif	defined(STM32F427xx )
#define STM32F427
#elif	defined(STM32F429xx )
#define STM32F429
#elif	defined(STM32F437xx )
#define STM32F437
#elif	defined(STM32F439xx )
#define STM32F439
#elif	defined(STM32F446xx )
#define STM32F446
#elif	defined(STM32F469xx )
#define STM32F469
#elif	defined(STM32F479xx )
#define STM32F479
#endif
#if		defined(STM32F401   ) || defined(STM32F405   ) || defined(STM32F407   )
#define STM32F40x
#elif	defined(STM32F410   ) || defined(STM32F411   ) || defined(STM32F412   ) ||\
		defined(STM32F413   ) || defined(STM32F415   ) || defined(STM32F417   )
#define STM32F41x
#elif	defined(STM32F423   ) || defined(STM32F427   ) || defined(STM32F429   )
#define STM32F42x
#elif	defined(STM32F437   ) || defined(STM32F439   )
#define STM32F43x
#elif	defined(STM32F446   )
#define STM32F44x
#elif	defined(STM32F469   )
#define STM32F46x
#elif	defined(STM32F479   )
#define STM32F47x
#endif
#if		defined(STM32F401   ) || defined(STM32F411   )
#define STM32F4x1
#elif	defined(STM32F405   ) || defined(STM32F415   )
#define STM32F4x5
#elif	defined(STM32F407   ) || defined(STM32F417   ) || defined(STM32F427   ) ||\
		defined(STM32F437   )
#define STM32F4x7
#elif	defined(STM32F410   )
#define STM32F4x0
#elif	defined(STM32F412   )
#define STM32F4x2
#elif	defined(STM32F413   ) || defined(STM32F423   )
#define STM32F4x3
#elif	defined(STM32F429   ) || defined(STM32F439   ) || defined(STM32F469   ) ||\
		defined(STM32F479   )
#define STM32F4x9
#elif	defined(STM32F446   )
#define STM32F4x6
#endif
#endif
//##############################################################################
//#                                 F7  Series                                 #
//##############################################################################
//#define STM32F722xx
//#define STM32F723xx
//#define STM32F732xx
//#define STM32F733xx
//#define STM32F745xx
//#define STM32F746xx
//#define STM32F756xx
//#define STM32F765xx
//#define STM32F767xx
//#define STM32F769xx
//#define STM32F777xx
//#define STM32F779xx

// ---- STM32F7 definition ----
#define __SOOL_NB_STM32F7\
	defined(STM32F722xx ) + defined(STM32F723xx ) + defined(STM32F732xx ) +\
	defined(STM32F733xx ) + defined(STM32F745xx ) + defined(STM32F746xx ) +\
	defined(STM32F756xx ) + defined(STM32F765xx ) + defined(STM32F767xx ) +\
	defined(STM32F769xx ) + defined(STM32F777xx ) + defined(STM32F779xx )
#if __SOOL_NB_STM32F7 > 1
#error only one chip must be defined
#elif __SOOL_NB_STM32F7 == 1
#define STM32F7
// ---- STM32F7 sub-series ----
#if		defined(STM32F722xx )
#define STM32F722
#elif	defined(STM32F723xx )
#define STM32F723
#elif	defined(STM32F732xx )
#define STM32F732
#elif	defined(STM32F733xx )
#define STM32F733
#elif	defined(STM32F745xx )
#define STM32F745
#elif	defined(STM32F746xx )
#define STM32F746
#elif	defined(STM32F756xx )
#define STM32F756
#elif	defined(STM32F765xx )
#define STM32F765
#elif	defined(STM32F767xx )
#define STM32F767
#elif	defined(STM32F769xx )
#define STM32F769
#elif	defined(STM32F777xx )
#define STM32F777
#elif	defined(STM32F779xx )
#define STM32F779
#endif
#if		defined(STM32F722   ) || defined(STM32F723   )
#define STM32F72x
#elif	defined(STM32F732   ) || defined(STM32F733   )
#define STM32F73x
#elif	defined(STM32F745   ) || defined(STM32F746   )
#define STM32F74x
#elif	defined(STM32F756   )
#define STM32F75x
#elif	defined(STM32F765   ) || defined(STM32F767   ) || defined(STM32F769   )
#define STM32F76x
#elif	defined(STM32F777   ) || defined(STM32F779   )
#define STM32F77x
#endif
#if		defined(STM32F722   ) || defined(STM32F732   )
#define STM32F7x2
#elif	defined(STM32F723   ) || defined(STM32F733   )
#define STM32F7x3
#elif	defined(STM32F745   ) || defined(STM32F765   )
#define STM32F7x5
#elif	defined(STM32F746   ) || defined(STM32F756   )
#define STM32F7x6
#elif	defined(STM32F767   ) || defined(STM32F777   )
#define STM32F7x7
#elif	defined(STM32F769   ) || defined(STM32F779   )
#define STM32F7x9
#endif
#endif
//##############################################################################
//#                                 H7  Series                                 #
//##############################################################################
//#define STM32H743xx
//#define STM32H750xx
//#define STM32H753xx

// ---- STM32H7 definition ----
#define __SOOL_NB_STM32H7\
	defined(STM32H743xx ) + defined(STM32H750xx ) + defined(STM32H753xx )
#if __SOOL_NB_STM32H7 > 1
#error only one chip must be defined
#elif __SOOL_NB_STM32H7 == 1
#define STM32H7
// ---- STM32H7 sub-series ----
#if		defined(STM32H743xx )
#define STM32H743
#elif	defined(STM32H750xx )
#define STM32H750
#elif	defined(STM32H753xx )
#define STM32H753
#endif
#if		defined(STM32H743   )
#define STM32H74x
#elif	defined(STM32H750   ) || defined(STM32H753   )
#define STM32H75x
#endif
#if		defined(STM32H743   ) || defined(STM32H753   )
#define STM32H7x3
#elif	defined(STM32H750   )
#define STM32H7x0
#endif
#endif
//##############################################################################
//#                                 L0  Series                                 #
//##############################################################################
//#define STM32L011xx
//#define STM32L021xx
//#define STM32L031xx
//#define STM32L041xx
//#define STM32L051xx
//#define STM32L052xx
//#define STM32L053xx
//#define STM32L061xx
//#define STM32L062xx
//#define STM32L063xx
//#define STM32L071xx
//#define STM32L072xx
//#define STM32L073xx
//#define STM32L081xx
//#define STM32L082xx
//#define STM32L083xx

// ---- STM32L0 definition ----
#define __SOOL_NB_STM32L0\
	defined(STM32L011xx ) + defined(STM32L021xx ) + defined(STM32L031xx ) +\
	defined(STM32L041xx ) + defined(STM32L051xx ) + defined(STM32L052xx ) +\
	defined(STM32L053xx ) + defined(STM32L061xx ) + defined(STM32L062xx ) +\
	defined(STM32L063xx ) + defined(STM32L071xx ) + defined(STM32L072xx ) +\
	defined(STM32L073xx ) + defined(STM32L081xx ) + defined(STM32L082xx ) +\
	defined(STM32L083xx )
#if __SOOL_NB_STM32L0 > 1
#error only one chip must be defined
#elif __SOOL_NB_STM32L0 == 1
#define STM32L0
// ---- STM32L0 sub-series ----
#if		defined(STM32L011xx )
#define STM32L011
#elif	defined(STM32L021xx )
#define STM32L021
#elif	defined(STM32L031xx )
#define STM32L031
#elif	defined(STM32L041xx )
#define STM32L041
#elif	defined(STM32L051xx )
#define STM32L051
#elif	defined(STM32L052xx )
#define STM32L052
#elif	defined(STM32L053xx )
#define STM32L053
#elif	defined(STM32L061xx )
#define STM32L061
#elif	defined(STM32L062xx )
#define STM32L062
#elif	defined(STM32L063xx )
#define STM32L063
#elif	defined(STM32L071xx )
#define STM32L071
#elif	defined(STM32L072xx )
#define STM32L072
#elif	defined(STM32L073xx )
#define STM32L073
#elif	defined(STM32L081xx )
#define STM32L081
#elif	defined(STM32L082xx )
#define STM32L082
#elif	defined(STM32L083xx )
#define STM32L083
#endif
#if		defined(STM32L011   )
#define STM32L01x
#elif	defined(STM32L021   )
#define STM32L02x
#elif	defined(STM32L031   )
#define STM32L03x
#elif	defined(STM32L041   )
#define STM32L04x
#elif	defined(STM32L051   ) || defined(STM32L052   ) || defined(STM32L053   )
#define STM32L05x
#elif	defined(STM32L061   ) || defined(STM32L062   ) || defined(STM32L063   )
#define STM32L06x
#elif	defined(STM32L071   ) || defined(STM32L072   ) || defined(STM32L073   )
#define STM32L07x
#elif	defined(STM32L081   ) || defined(STM32L082   ) || defined(STM32L083   )
#define STM32L08x
#endif
#if		defined(STM32L011   ) || defined(STM32L021   ) || defined(STM32L031   ) ||\
		defined(STM32L041   ) || defined(STM32L051   ) || defined(STM32L061   ) ||\
		defined(STM32L071   ) || defined(STM32L081   )
#define STM32L0x1
#elif	defined(STM32L052   ) || defined(STM32L062   ) || defined(STM32L072   ) ||\
		defined(STM32L082   )
#define STM32L0x2
#elif	defined(STM32L053   ) || defined(STM32L063   ) || defined(STM32L073   ) ||\
		defined(STM32L083   )
#define STM32L0x3
#endif
#endif
//##############################################################################
//#                                 L1  Series                                 #
//##############################################################################
//#define STM32L100xB
//#define STM32L100xBA
//#define STM32L100xC
//#define STM32L151xB
//#define STM32L151xBA
//#define STM32L151xC
//#define STM32L151xCA
//#define STM32L151xD
//#define STM32L151xDx
//#define STM32L151xE
//#define STM32L152xB
//#define STM32L152xBA
//#define STM32L152xC
//#define STM32L152xCA
//#define STM32L152xD
//#define STM32L152xDx
//#define STM32L152xE
//#define STM32L162xC
//#define STM32L162xCA
//#define STM32L162xD
//#define STM32L162xDx
//#define STM32L162xE

// ---- STM32L1 definition ----
#define __SOOL_NB_STM32L1\
	defined(STM32L100xB ) + defined(STM32L100xBA) + defined(STM32L100xC ) +\
	defined(STM32L151xB ) + defined(STM32L151xBA) + defined(STM32L151xC ) +\
	defined(STM32L151xCA) + defined(STM32L151xD ) + defined(STM32L151xDx) +\
	defined(STM32L151xE ) + defined(STM32L152xB ) + defined(STM32L152xBA) +\
	defined(STM32L152xC ) + defined(STM32L152xCA) + defined(STM32L152xD ) +\
	defined(STM32L152xDx) + defined(STM32L152xE ) + defined(STM32L162xC ) +\
	defined(STM32L162xCA) + defined(STM32L162xD ) + defined(STM32L162xDx) +\
	defined(STM32L162xE )
#if __SOOL_NB_STM32L1 > 1
#error only one chip must be defined
#elif __SOOL_NB_STM32L1 == 1
#define STM32L1
// ---- STM32L1 sub-series ----
#if		defined(STM32L100xB ) || defined(STM32L100xC )
#define STM32L100
#elif	defined(STM32L100xBA)
#define STM32L100x
#elif	defined(STM32L151xB ) || defined(STM32L151xC ) || defined(STM32L151xD ) ||\
		defined(STM32L151xE )
#define STM32L151
#elif	defined(STM32L151xBA) || defined(STM32L151xCA) || defined(STM32L151xDx)
#define STM32L151x
#elif	defined(STM32L152xB ) || defined(STM32L152xC ) || defined(STM32L152xD ) ||\
		defined(STM32L152xE )
#define STM32L152
#elif	defined(STM32L152xBA) || defined(STM32L152xCA) || defined(STM32L152xDx)
#define STM32L152x
#elif	defined(STM32L162xC ) || defined(STM32L162xD ) || defined(STM32L162xE )
#define STM32L162
#elif	defined(STM32L162xCA) || defined(STM32L162xDx)
#define STM32L162x
#endif
#if		defined(STM32L100   )
#define STM32L10x
#elif	defined(STM32L100x  )
#define STM32L100x
#elif	defined(STM32L151   ) || defined(STM32L152   )
#define STM32L15x
#elif	defined(STM32L151x  )
#define STM32L151x
#elif	defined(STM32L152x  )
#define STM32L152x
#elif	defined(STM32L162   )
#define STM32L16x
#elif	defined(STM32L162x  )
#define STM32L162x
#endif
#if		defined(STM32L100   )
#define STM32L1x0
#elif	defined(STM32L100x  )
#define STM32L10xx
#elif	defined(STM32L151   )
#define STM32L1x1
#elif	defined(STM32L151x  ) || defined(STM32L152x  )
#define STM32L15xx
#elif	defined(STM32L152   ) || defined(STM32L162   )
#define STM32L1x2
#elif	defined(STM32L162x  )
#define STM32L16xx
#endif
#endif
//##############################################################################
//#                                 L4  Series                                 #
//##############################################################################
//#define STM32L431xx
//#define STM32L432xx
//#define STM32L433xx
//#define STM32L442xx
//#define STM32L443xx
//#define STM32L451xx
//#define STM32L452xx
//#define STM32L462xx
//#define STM32L471xx
//#define STM32L475xx
//#define STM32L476xx
//#define STM32L485xx
//#define STM32L486xx
//#define STM32L496xx
//#define STM32L4A6xx

// ---- STM32L4 definition ----
#define __SOOL_NB_STM32L4\
	defined(STM32L431xx ) + defined(STM32L432xx ) + defined(STM32L433xx ) +\
	defined(STM32L442xx ) + defined(STM32L443xx ) + defined(STM32L451xx ) +\
	defined(STM32L452xx ) + defined(STM32L462xx ) + defined(STM32L471xx ) +\
	defined(STM32L475xx ) + defined(STM32L476xx ) + defined(STM32L485xx ) +\
	defined(STM32L486xx ) + defined(STM32L496xx ) + defined(STM32L4A6xx )
#if __SOOL_NB_STM32L4 > 1
#error only one chip must be defined
#elif __SOOL_NB_STM32L4 == 1
#define STM32L4
// ---- STM32L4 sub-series ----
#if		defined(STM32L431xx )
#define STM32L431
#elif	defined(STM32L432xx )
#define STM32L432
#elif	defined(STM32L433xx )
#define STM32L433
#elif	defined(STM32L442xx )
#define STM32L442
#elif	defined(STM32L443xx )
#define STM32L443
#elif	defined(STM32L451xx )
#define STM32L451
#elif	defined(STM32L452xx )
#define STM32L452
#elif	defined(STM32L462xx )
#define STM32L462
#elif	defined(STM32L471xx )
#define STM32L471
#elif	defined(STM32L475xx )
#define STM32L475
#elif	defined(STM32L476xx )
#define STM32L476
#elif	defined(STM32L485xx )
#define STM32L485
#elif	defined(STM32L486xx )
#define STM32L486
#elif	defined(STM32L496xx )
#define STM32L496
#elif	defined(STM32L4A6xx )
#define STM32L4A6
#endif
#if		defined(STM32L431   ) || defined(STM32L432   ) || defined(STM32L433   )
#define STM32L43x
#elif	defined(STM32L442   ) || defined(STM32L443   )
#define STM32L44x
#elif	defined(STM32L451   ) || defined(STM32L452   )
#define STM32L45x
#elif	defined(STM32L462   )
#define STM32L46x
#elif	defined(STM32L471   ) || defined(STM32L475   ) || defined(STM32L476   )
#define STM32L47x
#elif	defined(STM32L485   ) || defined(STM32L486   )
#define STM32L48x
#elif	defined(STM32L496   )
#define STM32L49x
#elif	defined(STM32L4A6   )
#define STM32L4Ax
#endif
#if		defined(STM32L431   ) || defined(STM32L451   ) || defined(STM32L471   )
#define STM32L4x1
#elif	defined(STM32L432   ) || defined(STM32L442   ) || defined(STM32L452   ) ||\
		defined(STM32L462   )
#define STM32L4x2
#elif	defined(STM32L433   ) || defined(STM32L443   )
#define STM32L4x3
#elif	defined(STM32L475   ) || defined(STM32L485   )
#define STM32L4x5
#elif	defined(STM32L476   ) || defined(STM32L486   ) || defined(STM32L496   ) ||\
		defined(STM32L4A6   )
#define STM32L4x6
#endif
#endif
//##############################################################################
//#                                 L4+ Series                                 #
//##############################################################################
//#define STM32L4R5xx
//#define STM32L4R7xx
//#define STM32L4R9xx
//#define STM32L4S5xx
//#define STM32L4S7xx
//#define STM32L4S9xx

// ---- STM32L4P definition ----
#define __SOOL_NB_STM32L4P\
	defined(STM32L4R5xx ) + defined(STM32L4R7xx ) + defined(STM32L4R9xx ) +\
	defined(STM32L4S5xx ) + defined(STM32L4S7xx ) + defined(STM32L4S9xx )
#if __SOOL_NB_STM32L4P > 1
#error only one chip must be defined
#elif __SOOL_NB_STM32L4P == 1
#define STM32L4P
// ---- STM32L4P sub-series ----
#if		defined(STM32L4R5xx )
#define STM32L4R5
#elif	defined(STM32L4R7xx )
#define STM32L4R7
#elif	defined(STM32L4R9xx )
#define STM32L4R9
#elif	defined(STM32L4S5xx )
#define STM32L4S5
#elif	defined(STM32L4S7xx )
#define STM32L4S7
#elif	defined(STM32L4S9xx )
#define STM32L4S9
#endif
#if		defined(STM32L4R5   ) || defined(STM32L4R7   ) || defined(STM32L4R9   )
#define STM32L4Rx
#elif	defined(STM32L4S5   ) || defined(STM32L4S7   ) || defined(STM32L4S9   )
#define STM32L4Sx
#endif
#if		defined(STM32L4R5   ) || defined(STM32L4S5   )
#define STM32L4x5
#elif	defined(STM32L4R7   ) || defined(STM32L4S7   )
#define STM32L4x7
#elif	defined(STM32L4R9   ) || defined(STM32L4S9   )
#define STM32L4x9
#endif
#endif
