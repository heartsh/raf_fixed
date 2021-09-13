/////////////////////////////////////////////////////////////////
// Options.hpp
/////////////////////////////////////////////////////////////////

#ifndef OPTIONS_HPP
#define OPTIONS_HPP

#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <map>

typedef float Real;

#define PARAMS_PAIRED_LOCARNA_LOG_ODDS            0
#define PARAMS_PAIRED_CONSTANT                    0
#define PARAMS_PAIRED_PROBABILITY                 1           // 111223344
#define PARAMS_PAIRED_PROBABILITY_SQUARED         1           // 11223344
#define PARAMS_PAIRED_PROBABILITY_LOG             1           // 1111223344
#define PARAMS_PAIRED_PROBABILITY_LOG_0_000001    0           // 1111223344
#define PARAMS_PAIRED_PROBABILITY_LOG_0_00001     0           // 1111223344
#define PARAMS_PAIRED_PROBABILITY_LOG_0_0001      0           // 1111223344
#define PARAMS_PAIRED_PROBABILITY_LOG_0_001       0           // 1111223344
#define PARAMS_PAIRED_PROBABILITY_LOG_0_01        0           // 1111223344
#define PARAMS_PAIRED_PROBABILITY_LOG_0_1         0           // 1111223344
#define PARAMS_PAIRED_PROBABILITY_LOG_1           0           // 1111223344
#define PARAMS_PAIRED_PROBABILITY_LOG_10          0           // 1111223344

#define PARAMS_PAIRED_PROBABILITY_00_05           0
#define PARAMS_PAIRED_PROBABILITY_05_10           0
#define PARAMS_PAIRED_PROBABILITY_10_15           0
#define PARAMS_PAIRED_PROBABILITY_15_20           0
#define PARAMS_PAIRED_PROBABILITY_20_25           0
#define PARAMS_PAIRED_PROBABILITY_25_30           0
#define PARAMS_PAIRED_PROBABILITY_30_35           0
#define PARAMS_PAIRED_PROBABILITY_35_40           0
#define PARAMS_PAIRED_PROBABILITY_40_45           0
#define PARAMS_PAIRED_PROBABILITY_45_50           0
#define PARAMS_PAIRED_PROBABILITY_50_55           0
#define PARAMS_PAIRED_PROBABILITY_55_60           0
#define PARAMS_PAIRED_PROBABILITY_60_65           0
#define PARAMS_PAIRED_PROBABILITY_65_70           0
#define PARAMS_PAIRED_PROBABILITY_70_75           0
#define PARAMS_PAIRED_PROBABILITY_75_80           0
#define PARAMS_PAIRED_PROBABILITY_80_85           0
#define PARAMS_PAIRED_PROBABILITY_85_90           0
#define PARAMS_PAIRED_PROBABILITY_90_95           0
#define PARAMS_PAIRED_PROBABILITY_95_00           0

#define PARAMS_UNPAIRED_CONSTANT                  0
#define PARAMS_UNPAIRED_PROBABILITY               0           // 24
#define PARAMS_UNPAIRED_PROBABILITY_SQUARED       0           // 124
#define PARAMS_UNPAIRED_PROBABILITY_LOG           1           // 1111223344
#define PARAMS_UNPAIRED_PROBABILITY_LOG_0_000001  0           // 1111223344
#define PARAMS_UNPAIRED_PROBABILITY_LOG_0_00001   0           // 1111223344
#define PARAMS_UNPAIRED_PROBABILITY_LOG_0_0001    0           // 1111223344
#define PARAMS_UNPAIRED_PROBABILITY_LOG_0_001     0           // 1111223344
#define PARAMS_UNPAIRED_PROBABILITY_LOG_0_01      0           // 1111223344
#define PARAMS_UNPAIRED_PROBABILITY_LOG_0_1       0           // 1111223344
#define PARAMS_UNPAIRED_PROBABILITY_LOG_1         0           // 1111223344
#define PARAMS_UNPAIRED_PROBABILITY_LOG_10        0           // 1111223344

#define PARAMS_UNPAIRED_PROBABILITY_00_05         0
#define PARAMS_UNPAIRED_PROBABILITY_05_10         0
#define PARAMS_UNPAIRED_PROBABILITY_10_15         0
#define PARAMS_UNPAIRED_PROBABILITY_15_20         0
#define PARAMS_UNPAIRED_PROBABILITY_20_25         0
#define PARAMS_UNPAIRED_PROBABILITY_25_30         0
#define PARAMS_UNPAIRED_PROBABILITY_30_35         0
#define PARAMS_UNPAIRED_PROBABILITY_35_40         0
#define PARAMS_UNPAIRED_PROBABILITY_40_45         0
#define PARAMS_UNPAIRED_PROBABILITY_45_50         0
#define PARAMS_UNPAIRED_PROBABILITY_50_55         0
#define PARAMS_UNPAIRED_PROBABILITY_55_60         0
#define PARAMS_UNPAIRED_PROBABILITY_60_65         0
#define PARAMS_UNPAIRED_PROBABILITY_65_70         0
#define PARAMS_UNPAIRED_PROBABILITY_70_75         0
#define PARAMS_UNPAIRED_PROBABILITY_75_80         0
#define PARAMS_UNPAIRED_PROBABILITY_80_85         0
#define PARAMS_UNPAIRED_PROBABILITY_85_90         0
#define PARAMS_UNPAIRED_PROBABILITY_90_95         0
#define PARAMS_UNPAIRED_PROBABILITY_95_00         0

#define PARAMS_ALIGNED_DOT_PLOT                   0           // 11
#define PARAMS_ALIGNED_CONSTANT                   0
#define PARAMS_ALIGNED_PROBABILITY                1           // 1113344
#define PARAMS_ALIGNED_PROBABILITY_SQUARED        1           // 111334
#define PARAMS_ALIGNED_PROBABILITY_LOG            1           // 1111223344
#define PARAMS_ALIGNED_PROBABILITY_LOG_0_000001   0           // 1111223344
#define PARAMS_ALIGNED_PROBABILITY_LOG_0_00001    0           // 1111223344
#define PARAMS_ALIGNED_PROBABILITY_LOG_0_0001     0           // 1111223344
#define PARAMS_ALIGNED_PROBABILITY_LOG_0_001      0           // 1111223344
#define PARAMS_ALIGNED_PROBABILITY_LOG_0_01       0           // 1111223344
#define PARAMS_ALIGNED_PROBABILITY_LOG_0_1        0           // 1111223344
#define PARAMS_ALIGNED_PROBABILITY_LOG_1          0           // 1111223344
#define PARAMS_ALIGNED_PROBABILITY_LOG_10         0           // 1111223344

#define PARAMS_ALIGNED_PROBABILITY_00_05          0
#define PARAMS_ALIGNED_PROBABILITY_05_10          0
#define PARAMS_ALIGNED_PROBABILITY_10_15          0
#define PARAMS_ALIGNED_PROBABILITY_15_20          0
#define PARAMS_ALIGNED_PROBABILITY_20_25          0
#define PARAMS_ALIGNED_PROBABILITY_25_30          0
#define PARAMS_ALIGNED_PROBABILITY_30_35          0
#define PARAMS_ALIGNED_PROBABILITY_35_40          0
#define PARAMS_ALIGNED_PROBABILITY_40_45          0
#define PARAMS_ALIGNED_PROBABILITY_45_50          0
#define PARAMS_ALIGNED_PROBABILITY_50_55          0
#define PARAMS_ALIGNED_PROBABILITY_55_60          0
#define PARAMS_ALIGNED_PROBABILITY_60_65          0
#define PARAMS_ALIGNED_PROBABILITY_65_70          0
#define PARAMS_ALIGNED_PROBABILITY_70_75          0
#define PARAMS_ALIGNED_PROBABILITY_75_80          0
#define PARAMS_ALIGNED_PROBABILITY_80_85          0
#define PARAMS_ALIGNED_PROBABILITY_85_90          0
#define PARAMS_ALIGNED_PROBABILITY_90_95          0
#define PARAMS_ALIGNED_PROBABILITY_95_00          0

#define PARAMS_UNALIGNED_CONSTANT                 0          // 1124
#define PARAMS_UNALIGNED_PROBABILITY              0
#define PARAMS_UNALIGNED_PROBABILITY_SQUARED      0
#define PARAMS_UNALIGNED_PROBABILITY_LOG          1           // 1111223344
#define PARAMS_UNALIGNED_PROBABILITY_LOG_0_000001 0           // 1111223344
#define PARAMS_UNALIGNED_PROBABILITY_LOG_0_00001  0           // 1111223344
#define PARAMS_UNALIGNED_PROBABILITY_LOG_0_0001   0           // 1111223344
#define PARAMS_UNALIGNED_PROBABILITY_LOG_0_001    0           // 1111223344
#define PARAMS_UNALIGNED_PROBABILITY_LOG_0_01     0           // 1111223344
#define PARAMS_UNALIGNED_PROBABILITY_LOG_0_1      0           // 1111223344
#define PARAMS_UNALIGNED_PROBABILITY_LOG_1        0           // 1111223344
#define PARAMS_UNALIGNED_PROBABILITY_LOG_10       0           // 1111223344

#define PARAMS_UNALIGNED_PROBABILITY_00_05        0
#define PARAMS_UNALIGNED_PROBABILITY_05_10        0
#define PARAMS_UNALIGNED_PROBABILITY_10_15        0
#define PARAMS_UNALIGNED_PROBABILITY_15_20        0
#define PARAMS_UNALIGNED_PROBABILITY_20_25        0
#define PARAMS_UNALIGNED_PROBABILITY_25_30        0
#define PARAMS_UNALIGNED_PROBABILITY_30_35        0
#define PARAMS_UNALIGNED_PROBABILITY_35_40        0
#define PARAMS_UNALIGNED_PROBABILITY_40_45        0
#define PARAMS_UNALIGNED_PROBABILITY_45_50        0
#define PARAMS_UNALIGNED_PROBABILITY_50_55        0
#define PARAMS_UNALIGNED_PROBABILITY_55_60        0
#define PARAMS_UNALIGNED_PROBABILITY_60_65        0
#define PARAMS_UNALIGNED_PROBABILITY_65_70        0
#define PARAMS_UNALIGNED_PROBABILITY_70_75        0
#define PARAMS_UNALIGNED_PROBABILITY_75_80        0
#define PARAMS_UNALIGNED_PROBABILITY_80_85        0
#define PARAMS_UNALIGNED_PROBABILITY_85_90        0
#define PARAMS_UNALIGNED_PROBABILITY_90_95        0
#define PARAMS_UNALIGNED_PROBABILITY_95_00        0

enum WeightType
{
#if PARAMS_PAIRED_LOCARNA_LOG_ODDS
    Weight_PAIRED_LOCARNA_LOG_ODDS,
#endif
#if PARAMS_PAIRED_CONSTANT
    Weight_PAIRED_CONSTANT,
#endif
#if PARAMS_PAIRED_PROBABILITY
    Weight_PAIRED_PROBABILITY,
#endif
#if PARAMS_PAIRED_PROBABILITY_SQUARED
    Weight_PAIRED_PROBABILITY_SQUARED,
#endif
#if PARAMS_PAIRED_PROBABILITY_LOG
    Weight_PAIRED_PROBABILITY_LOG,
#endif
#if PARAMS_PAIRED_PROBABILITY_LOG_0_000001
    Weight_PAIRED_PROBABILITY_LOG_0_000001,
#endif
#if PARAMS_PAIRED_PROBABILITY_LOG_0_00001
    Weight_PAIRED_PROBABILITY_LOG_0_00001,
#endif
#if PARAMS_PAIRED_PROBABILITY_LOG_0_0001
    Weight_PAIRED_PROBABILITY_LOG_0_0001,
#endif
#if PARAMS_PAIRED_PROBABILITY_LOG_0_001
    Weight_PAIRED_PROBABILITY_LOG_0_001,
#endif
#if PARAMS_PAIRED_PROBABILITY_LOG_0_01
    Weight_PAIRED_PROBABILITY_LOG_0_01,
#endif
#if PARAMS_PAIRED_PROBABILITY_LOG_0_1
    Weight_PAIRED_PROBABILITY_LOG_0_1,
#endif
#if PARAMS_PAIRED_PROBABILITY_LOG_1
    Weight_PAIRED_PROBABILITY_LOG_1,
#endif
#if PARAMS_PAIRED_PROBABILITY_LOG_10
    Weight_PAIRED_PROBABILITY_LOG_10,
#endif
#if PARAMS_PAIRED_PROBABILITY_00_05
    Weight_PAIRED_PROBABILITY_00_05,
#endif
#if PARAMS_PAIRED_PROBABILITY_05_10
    Weight_PAIRED_PROBABILITY_05_10,
#endif
#if PARAMS_PAIRED_PROBABILITY_10_15
    Weight_PAIRED_PROBABILITY_10_15,
#endif
#if PARAMS_PAIRED_PROBABILITY_15_20
    Weight_PAIRED_PROBABILITY_15_20,
#endif
#if PARAMS_PAIRED_PROBABILITY_20_25
    Weight_PAIRED_PROBABILITY_20_25,
#endif
#if PARAMS_PAIRED_PROBABILITY_25_30
    Weight_PAIRED_PROBABILITY_25_30,
#endif
#if PARAMS_PAIRED_PROBABILITY_30_35
    Weight_PAIRED_PROBABILITY_30_35,
#endif
#if PARAMS_PAIRED_PROBABILITY_35_40
    Weight_PAIRED_PROBABILITY_35_40,
#endif
#if PARAMS_PAIRED_PROBABILITY_40_45
    Weight_PAIRED_PROBABILITY_40_45,
#endif
#if PARAMS_PAIRED_PROBABILITY_45_50
    Weight_PAIRED_PROBABILITY_45_50,
#endif
#if PARAMS_PAIRED_PROBABILITY_50_55
    Weight_PAIRED_PROBABILITY_50_55,
#endif
#if PARAMS_PAIRED_PROBABILITY_55_60
    Weight_PAIRED_PROBABILITY_55_60,
#endif
#if PARAMS_PAIRED_PROBABILITY_60_65
    Weight_PAIRED_PROBABILITY_60_65,
#endif
#if PARAMS_PAIRED_PROBABILITY_65_70
    Weight_PAIRED_PROBABILITY_65_70,
#endif
#if PARAMS_PAIRED_PROBABILITY_70_75
    Weight_PAIRED_PROBABILITY_70_75,
#endif
#if PARAMS_PAIRED_PROBABILITY_75_80
    Weight_PAIRED_PROBABILITY_75_80,
#endif
#if PARAMS_PAIRED_PROBABILITY_80_85
    Weight_PAIRED_PROBABILITY_80_85,
#endif
#if PARAMS_PAIRED_PROBABILITY_85_90
    Weight_PAIRED_PROBABILITY_85_90,
#endif
#if PARAMS_PAIRED_PROBABILITY_90_95
    Weight_PAIRED_PROBABILITY_90_95,
#endif
#if PARAMS_PAIRED_PROBABILITY_95_00
    Weight_PAIRED_PROBABILITY_95_00,
#endif
#if PARAMS_UNPAIRED_CONSTANT
    Weight_UNPAIRED_CONSTANT,
#endif
#if PARAMS_UNPAIRED_PROBABILITY
    Weight_UNPAIRED_PROBABILITY,
#endif
#if PARAMS_UNPAIRED_PROBABILITY_SQUARED
    Weight_UNPAIRED_PROBABILITY_SQUARED,
#endif
#if PARAMS_UNPAIRED_PROBABILITY_LOG
    Weight_UNPAIRED_PROBABILITY_LOG,
#endif
#if PARAMS_UNPAIRED_PROBABILITY_LOG_0_000001
    Weight_UNPAIRED_PROBABILITY_LOG_0_000001,
#endif
#if PARAMS_UNPAIRED_PROBABILITY_LOG_0_00001
    Weight_UNPAIRED_PROBABILITY_LOG_0_00001,
#endif
#if PARAMS_UNPAIRED_PROBABILITY_LOG_0_0001
    Weight_UNPAIRED_PROBABILITY_LOG_0_0001,
#endif
#if PARAMS_UNPAIRED_PROBABILITY_LOG_0_001
    Weight_UNPAIRED_PROBABILITY_LOG_0_001,
#endif
#if PARAMS_UNPAIRED_PROBABILITY_LOG_0_01
    Weight_UNPAIRED_PROBABILITY_LOG_0_01,
#endif
#if PARAMS_UNPAIRED_PROBABILITY_LOG_0_1
    Weight_UNPAIRED_PROBABILITY_LOG_0_1,
#endif
#if PARAMS_UNPAIRED_PROBABILITY_LOG_1
    Weight_UNPAIRED_PROBABILITY_LOG_1,
#endif
#if PARAMS_UNPAIRED_PROBABILITY_LOG_10
    Weight_UNPAIRED_PROBABILITY_LOG_10,
#endif
#if PARAMS_UNPAIRED_PROBABILITY_00_05
    Weight_UNPAIRED_PROBABILITY_00_05,
#endif
#if PARAMS_UNPAIRED_PROBABILITY_05_10
    Weight_UNPAIRED_PROBABILITY_05_10,
#endif
#if PARAMS_UNPAIRED_PROBABILITY_10_15
    Weight_UNPAIRED_PROBABILITY_10_15,
#endif
#if PARAMS_UNPAIRED_PROBABILITY_15_20
    Weight_UNPAIRED_PROBABILITY_15_20,
#endif
#if PARAMS_UNPAIRED_PROBABILITY_20_25
    Weight_UNPAIRED_PROBABILITY_20_25,
#endif
#if PARAMS_UNPAIRED_PROBABILITY_25_30
    Weight_UNPAIRED_PROBABILITY_25_30,
#endif
#if PARAMS_UNPAIRED_PROBABILITY_30_35
    Weight_UNPAIRED_PROBABILITY_30_35,
#endif
#if PARAMS_UNPAIRED_PROBABILITY_35_40
    Weight_UNPAIRED_PROBABILITY_35_40,
#endif
#if PARAMS_UNPAIRED_PROBABILITY_40_45
    Weight_UNPAIRED_PROBABILITY_40_45,
#endif
#if PARAMS_UNPAIRED_PROBABILITY_45_50
    Weight_UNPAIRED_PROBABILITY_45_50,
#endif
#if PARAMS_UNPAIRED_PROBABILITY_50_55
    Weight_UNPAIRED_PROBABILITY_50_55,
#endif
#if PARAMS_UNPAIRED_PROBABILITY_55_60
    Weight_UNPAIRED_PROBABILITY_55_60,
#endif
#if PARAMS_UNPAIRED_PROBABILITY_60_65
    Weight_UNPAIRED_PROBABILITY_60_65,
#endif
#if PARAMS_UNPAIRED_PROBABILITY_65_70
    Weight_UNPAIRED_PROBABILITY_65_70,
#endif
#if PARAMS_UNPAIRED_PROBABILITY_70_75
    Weight_UNPAIRED_PROBABILITY_70_75,
#endif
#if PARAMS_UNPAIRED_PROBABILITY_75_80
    Weight_UNPAIRED_PROBABILITY_75_80,
#endif
#if PARAMS_UNPAIRED_PROBABILITY_80_85
    Weight_UNPAIRED_PROBABILITY_80_85,
#endif
#if PARAMS_UNPAIRED_PROBABILITY_85_90
    Weight_UNPAIRED_PROBABILITY_85_90,
#endif
#if PARAMS_UNPAIRED_PROBABILITY_90_95
    Weight_UNPAIRED_PROBABILITY_90_95,
#endif
#if PARAMS_UNPAIRED_PROBABILITY_95_00
    Weight_UNPAIRED_PROBABILITY_95_00,
#endif
#if PARAMS_ALIGNED_DOT_PLOT
    Weight_ALIGNED_DOT_PLOT,
#endif
#if PARAMS_ALIGNED_CONSTANT
    Weight_ALIGNED_CONSTANT,
#endif
#if PARAMS_ALIGNED_PROBABILITY
    Weight_ALIGNED_PROBABILITY,
#endif
#if PARAMS_ALIGNED_PROBABILITY_SQUARED
    Weight_ALIGNED_PROBABILITY_SQUARED,
#endif
#if PARAMS_ALIGNED_PROBABILITY_LOG
    Weight_ALIGNED_PROBABILITY_LOG,
#endif
#if PARAMS_ALIGNED_PROBABILITY_LOG_0_000001
    Weight_ALIGNED_PROBABILITY_LOG_0_000001,
#endif
#if PARAMS_ALIGNED_PROBABILITY_LOG_0_00001
    Weight_ALIGNED_PROBABILITY_LOG_0_00001,
#endif
#if PARAMS_ALIGNED_PROBABILITY_LOG_0_0001
    Weight_ALIGNED_PROBABILITY_LOG_0_0001,
#endif
#if PARAMS_ALIGNED_PROBABILITY_LOG_0_001
    Weight_ALIGNED_PROBABILITY_LOG_0_001,
#endif
#if PARAMS_ALIGNED_PROBABILITY_LOG_0_01
    Weight_ALIGNED_PROBABILITY_LOG_0_01,
#endif
#if PARAMS_ALIGNED_PROBABILITY_LOG_0_1
    Weight_ALIGNED_PROBABILITY_LOG_0_1,
#endif
#if PARAMS_ALIGNED_PROBABILITY_LOG_1
    Weight_ALIGNED_PROBABILITY_LOG_1,
#endif
#if PARAMS_ALIGNED_PROBABILITY_LOG_10
    Weight_ALIGNED_PROBABILITY_LOG_10,
#endif
#if PARAMS_ALIGNED_PROBABILITY_00_05
    Weight_ALIGNED_PROBABILITY_00_05,
#endif
#if PARAMS_ALIGNED_PROBABILITY_05_10
    Weight_ALIGNED_PROBABILITY_05_10,
#endif
#if PARAMS_ALIGNED_PROBABILITY_10_15
    Weight_ALIGNED_PROBABILITY_10_15,
#endif
#if PARAMS_ALIGNED_PROBABILITY_15_20
    Weight_ALIGNED_PROBABILITY_15_20,
#endif
#if PARAMS_ALIGNED_PROBABILITY_20_25
    Weight_ALIGNED_PROBABILITY_20_25,
#endif
#if PARAMS_ALIGNED_PROBABILITY_25_30
    Weight_ALIGNED_PROBABILITY_25_30,
#endif
#if PARAMS_ALIGNED_PROBABILITY_30_35
    Weight_ALIGNED_PROBABILITY_30_35,
#endif
#if PARAMS_ALIGNED_PROBABILITY_35_40
    Weight_ALIGNED_PROBABILITY_35_40,
#endif
#if PARAMS_ALIGNED_PROBABILITY_40_45
    Weight_ALIGNED_PROBABILITY_40_45,
#endif
#if PARAMS_ALIGNED_PROBABILITY_45_50
    Weight_ALIGNED_PROBABILITY_45_50,
#endif
#if PARAMS_ALIGNED_PROBABILITY_50_55
    Weight_ALIGNED_PROBABILITY_50_55,
#endif
#if PARAMS_ALIGNED_PROBABILITY_55_60
    Weight_ALIGNED_PROBABILITY_55_60,
#endif
#if PARAMS_ALIGNED_PROBABILITY_60_65
    Weight_ALIGNED_PROBABILITY_60_65,
#endif
#if PARAMS_ALIGNED_PROBABILITY_65_70
    Weight_ALIGNED_PROBABILITY_65_70,
#endif
#if PARAMS_ALIGNED_PROBABILITY_70_75
    Weight_ALIGNED_PROBABILITY_70_75,
#endif
#if PARAMS_ALIGNED_PROBABILITY_75_80
    Weight_ALIGNED_PROBABILITY_75_80,
#endif
#if PARAMS_ALIGNED_PROBABILITY_80_85
    Weight_ALIGNED_PROBABILITY_80_85,
#endif
#if PARAMS_ALIGNED_PROBABILITY_85_90
    Weight_ALIGNED_PROBABILITY_85_90,
#endif
#if PARAMS_ALIGNED_PROBABILITY_90_95
    Weight_ALIGNED_PROBABILITY_90_95,
#endif
#if PARAMS_ALIGNED_PROBABILITY_95_00
    Weight_ALIGNED_PROBABILITY_95_00,
#endif
#if PARAMS_UNALIGNED_CONSTANT
    Weight_UNALIGNED_CONSTANT,
#endif
#if PARAMS_UNALIGNED_PROBABILITY
    Weight_UNALIGNED_PROBABILITY,
#endif
#if PARAMS_UNALIGNED_PROBABILITY_SQUARED
    Weight_UNALIGNED_PROBABILITY_SQUARED,
#endif
#if PARAMS_UNALIGNED_PROBABILITY_LOG
    Weight_UNALIGNED_PROBABILITY_LOG,
#endif
#if PARAMS_UNALIGNED_PROBABILITY_LOG_0_000001
    Weight_UNALIGNED_PROBABILITY_LOG_0_000001,
#endif
#if PARAMS_UNALIGNED_PROBABILITY_LOG_0_00001
    Weight_UNALIGNED_PROBABILITY_LOG_0_00001,
#endif
#if PARAMS_UNALIGNED_PROBABILITY_LOG_0_0001
    Weight_UNALIGNED_PROBABILITY_LOG_0_0001,
#endif
#if PARAMS_UNALIGNED_PROBABILITY_LOG_0_001
    Weight_UNALIGNED_PROBABILITY_LOG_0_001,
#endif
#if PARAMS_UNALIGNED_PROBABILITY_LOG_0_01
    Weight_UNALIGNED_PROBABILITY_LOG_0_01,
#endif
#if PARAMS_UNALIGNED_PROBABILITY_LOG_0_1
    Weight_UNALIGNED_PROBABILITY_LOG_0_1,
#endif
#if PARAMS_UNALIGNED_PROBABILITY_LOG_1
    Weight_UNALIGNED_PROBABILITY_LOG_1,
#endif
#if PARAMS_UNALIGNED_PROBABILITY_LOG_10
    Weight_UNALIGNED_PROBABILITY_LOG_10,
#endif
#if PARAMS_UNALIGNED_PROBABILITY_00_05
    Weight_UNALIGNED_PROBABILITY_00_05,
#endif
#if PARAMS_UNALIGNED_PROBABILITY_05_10
    Weight_UNALIGNED_PROBABILITY_05_10,
#endif
#if PARAMS_UNALIGNED_PROBABILITY_10_15
    Weight_UNALIGNED_PROBABILITY_10_15,
#endif
#if PARAMS_UNALIGNED_PROBABILITY_15_20
    Weight_UNALIGNED_PROBABILITY_15_20,
#endif
#if PARAMS_UNALIGNED_PROBABILITY_20_25
    Weight_UNALIGNED_PROBABILITY_20_25,
#endif
#if PARAMS_UNALIGNED_PROBABILITY_25_30
    Weight_UNALIGNED_PROBABILITY_25_30,
#endif
#if PARAMS_UNALIGNED_PROBABILITY_30_35
    Weight_UNALIGNED_PROBABILITY_30_35,
#endif
#if PARAMS_UNALIGNED_PROBABILITY_35_40
    Weight_UNALIGNED_PROBABILITY_35_40,
#endif
#if PARAMS_UNALIGNED_PROBABILITY_40_45
    Weight_UNALIGNED_PROBABILITY_40_45,
#endif
#if PARAMS_UNALIGNED_PROBABILITY_45_50
    Weight_UNALIGNED_PROBABILITY_45_50,
#endif
#if PARAMS_UNALIGNED_PROBABILITY_50_55
    Weight_UNALIGNED_PROBABILITY_50_55,
#endif
#if PARAMS_UNALIGNED_PROBABILITY_55_60
    Weight_UNALIGNED_PROBABILITY_55_60,
#endif
#if PARAMS_UNALIGNED_PROBABILITY_60_65
    Weight_UNALIGNED_PROBABILITY_60_65,
#endif
#if PARAMS_UNALIGNED_PROBABILITY_65_70
    Weight_UNALIGNED_PROBABILITY_65_70,
#endif
#if PARAMS_UNALIGNED_PROBABILITY_70_75
    Weight_UNALIGNED_PROBABILITY_70_75,
#endif
#if PARAMS_UNALIGNED_PROBABILITY_75_80
    Weight_UNALIGNED_PROBABILITY_75_80,
#endif
#if PARAMS_UNALIGNED_PROBABILITY_80_85
    Weight_UNALIGNED_PROBABILITY_80_85,
#endif
#if PARAMS_UNALIGNED_PROBABILITY_85_90
    Weight_UNALIGNED_PROBABILITY_85_90,
#endif
#if PARAMS_UNALIGNED_PROBABILITY_90_95
    Weight_UNALIGNED_PROBABILITY_90_95,
#endif
#if PARAMS_UNALIGNED_PROBABILITY_95_00
    Weight_UNALIGNED_PROBABILITY_95_00,
#endif
    Weight_NUM_WEIGHTS
};

#endif