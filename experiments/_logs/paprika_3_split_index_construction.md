Table of Contents
=================

* [01_1from10_bin_k31](#01_1from10_bin_k31)
  * [01_1from10_bin_k31/1.1_kmer_propagation.log](#01_1from10_bin_k3111_kmer_propagationlog)
  * [01_1from10_bin_k31/1.2_merging_fasta.log](#01_1from10_bin_k3112_merging_fastalog)
  * [01_1from10_bin_k31/2.1_bwa_fa2pac.log](#01_1from10_bin_k3121_bwa_fa2paclog)
  * [01_1from10_bin_k31/2.2_bwa_pac2bwt.log](#01_1from10_bin_k3122_bwa_pac2bwtlog)
  * [01_1from10_bin_k31/2.3_bwa_bwtupdate.log](#01_1from10_bin_k3123_bwa_bwtupdatelog)
  * [01_1from10_bin_k31/2.4_bwa_bwt2sa.log](#01_1from10_bin_k3124_bwa_bwt2salog)
  * [01_1from10_bin_k31/2.5_klcp.log](#01_1from10_bin_k3125_klcplog)
  * [01_1from10_bin_k31/3.1_matching_rolling.log](#01_1from10_bin_k3131_matching_rollinglog)
  * [01_1from10_bin_k31/3.2_matching_restarted.log](#01_1from10_bin_k3132_matching_restartedlog)
  * [01_1from10_bin_k31/3.3_matching_rolling_skipping.log](#01_1from10_bin_k3133_matching_rolling_skippinglog)
  * [01_1from10_bin_k31/3.4_matching_restarted_skipping.log](#01_1from10_bin_k3134_matching_restarted_skippinglog)
  * [01_1from10_bin_k31/4.1_contigs_stats.log](#01_1from10_bin_k3141_contigs_statslog)
  * [01_1from10_bin_k31/4.2_index_size.log](#01_1from10_bin_k3142_index_sizelog)
* [02_1from10_bin_k25](#02_1from10_bin_k25)
  * [02_1from10_bin_k25/1.1_kmer_propagation.log](#02_1from10_bin_k2511_kmer_propagationlog)
  * [02_1from10_bin_k25/1.2_merging_fasta.log](#02_1from10_bin_k2512_merging_fastalog)
  * [02_1from10_bin_k25/2.1_bwa_fa2pac.log](#02_1from10_bin_k2521_bwa_fa2paclog)
  * [02_1from10_bin_k25/2.2_bwa_pac2bwt.log](#02_1from10_bin_k2522_bwa_pac2bwtlog)
  * [02_1from10_bin_k25/2.3_bwa_bwtupdate.log](#02_1from10_bin_k2523_bwa_bwtupdatelog)
  * [02_1from10_bin_k25/2.4_bwa_bwt2sa.log](#02_1from10_bin_k2524_bwa_bwt2salog)
  * [02_1from10_bin_k25/2.5_klcp.log](#02_1from10_bin_k2525_klcplog)
  * [02_1from10_bin_k25/3.1_matching_rolling.log](#02_1from10_bin_k2531_matching_rollinglog)
  * [02_1from10_bin_k25/3.2_matching_restarted.log](#02_1from10_bin_k2532_matching_restartedlog)
  * [02_1from10_bin_k25/3.3_matching_rolling_skipping.log](#02_1from10_bin_k2533_matching_rolling_skippinglog)
  * [02_1from10_bin_k25/3.4_matching_restarted_skipping.log](#02_1from10_bin_k2534_matching_restarted_skippinglog)
  * [02_1from10_bin_k25/4.1_contigs_stats.log](#02_1from10_bin_k2541_contigs_statslog)
  * [02_1from10_bin_k25/4.2_index_size.log](#02_1from10_bin_k2542_index_sizelog)
* [03_fullBacteria_orig_k31](#03_fullBacteria_orig_k31)
  * [03_fullBacteria_orig_k31/1.1_kmer_propagation.log](#03_fullbacteria_orig_k3111_kmer_propagationlog)
  * [03_fullBacteria_orig_k31/1.2_merging_fasta.log](#03_fullbacteria_orig_k3112_merging_fastalog)
  * [03_fullBacteria_orig_k31/2.1_bwa_fa2pac.log](#03_fullbacteria_orig_k3121_bwa_fa2paclog)
  * [03_fullBacteria_orig_k31/2.2_bwa_pac2bwt.log](#03_fullbacteria_orig_k3122_bwa_pac2bwtlog)
  * [03_fullBacteria_orig_k31/2.3_bwa_bwtupdate.log](#03_fullbacteria_orig_k3123_bwa_bwtupdatelog)
  * [03_fullBacteria_orig_k31/2.4_bwa_bwt2sa.log](#03_fullbacteria_orig_k3124_bwa_bwt2salog)
  * [03_fullBacteria_orig_k31/2.5_klcp.log](#03_fullbacteria_orig_k3125_klcplog)
  * [03_fullBacteria_orig_k31/3.1_matching_rolling.log](#03_fullbacteria_orig_k3131_matching_rollinglog)
  * [03_fullBacteria_orig_k31/3.2_matching_restarted.log](#03_fullbacteria_orig_k3132_matching_restartedlog)
  * [03_fullBacteria_orig_k31/3.3_matching_rolling_skipping.log](#03_fullbacteria_orig_k3133_matching_rolling_skippinglog)
  * [03_fullBacteria_orig_k31/3.4_matching_restarted_skipping.log](#03_fullbacteria_orig_k3134_matching_restarted_skippinglog)
  * [03_fullBacteria_orig_k31/4.1_contigs_stats.log](#03_fullbacteria_orig_k3141_contigs_statslog)
  * [03_fullBacteria_orig_k31/4.2_index_size.log](#03_fullbacteria_orig_k3142_index_sizelog)
* [04_fullBacteria_bin_k31](#04_fullBacteria_bin_k31)
  * [04_fullBacteria_bin_k31/1.1_kmer_propagation.log](#04_fullbacteria_bin_k3111_kmer_propagationlog)
  * [04_fullBacteria_bin_k31/1.2_merging_fasta.log](#04_fullbacteria_bin_k3112_merging_fastalog)
  * [04_fullBacteria_bin_k31/2.1_bwa_fa2pac.log](#04_fullbacteria_bin_k3121_bwa_fa2paclog)
  * [04_fullBacteria_bin_k31/2.2_bwa_pac2bwt.log](#04_fullbacteria_bin_k3122_bwa_pac2bwtlog)
  * [04_fullBacteria_bin_k31/2.3_bwa_bwtupdate.log](#04_fullbacteria_bin_k3123_bwa_bwtupdatelog)
  * [04_fullBacteria_bin_k31/2.4_bwa_bwt2sa.log](#04_fullbacteria_bin_k3124_bwa_bwt2salog)
  * [04_fullBacteria_bin_k31/2.5_klcp.log](#04_fullbacteria_bin_k3125_klcplog)
  * [04_fullBacteria_bin_k31/3.1_matching_rolling.log](#04_fullbacteria_bin_k3131_matching_rollinglog)
  * [04_fullBacteria_bin_k31/3.2_matching_restarted.log](#04_fullbacteria_bin_k3132_matching_restartedlog)
  * [04_fullBacteria_bin_k31/3.3_matching_rolling_skipping.log](#04_fullbacteria_bin_k3133_matching_rolling_skippinglog)
  * [04_fullBacteria_bin_k31/3.4_matching_restarted_skipping.log](#04_fullbacteria_bin_k3134_matching_restarted_skippinglog)
  * [04_fullBacteria_bin_k31/4.1_contigs_stats.log](#04_fullbacteria_bin_k3141_contigs_statslog)
  * [04_fullBacteria_bin_k31/4.2_index_size.log](#04_fullbacteria_bin_k3142_index_sizelog)
* [05_fullBacteria_orig_k25](#05_fullBacteria_orig_k25)
  * [05_fullBacteria_orig_k25/1.1_kmer_propagation.log](#05_fullbacteria_orig_k2511_kmer_propagationlog)
  * [05_fullBacteria_orig_k25/1.2_merging_fasta.log](#05_fullbacteria_orig_k2512_merging_fastalog)
  * [05_fullBacteria_orig_k25/2.1_bwa_fa2pac.log](#05_fullbacteria_orig_k2521_bwa_fa2paclog)
  * [05_fullBacteria_orig_k25/2.2_bwa_pac2bwt.log](#05_fullbacteria_orig_k2522_bwa_pac2bwtlog)
  * [05_fullBacteria_orig_k25/2.3_bwa_bwtupdate.log](#05_fullbacteria_orig_k2523_bwa_bwtupdatelog)
  * [05_fullBacteria_orig_k25/2.4_bwa_bwt2sa.log](#05_fullbacteria_orig_k2524_bwa_bwt2salog)
  * [05_fullBacteria_orig_k25/2.5_klcp.log](#05_fullbacteria_orig_k2525_klcplog)
  * [05_fullBacteria_orig_k25/3.1_matching_rolling.log](#05_fullbacteria_orig_k2531_matching_rollinglog)
  * [05_fullBacteria_orig_k25/3.2_matching_restarted.log](#05_fullbacteria_orig_k2532_matching_restartedlog)
  * [05_fullBacteria_orig_k25/3.3_matching_rolling_skipping.log](#05_fullbacteria_orig_k2533_matching_rolling_skippinglog)
  * [05_fullBacteria_orig_k25/3.4_matching_restarted_skipping.log](#05_fullbacteria_orig_k2534_matching_restarted_skippinglog)
  * [05_fullBacteria_orig_k25/4.1_contigs_stats.log](#05_fullbacteria_orig_k2541_contigs_statslog)
  * [05_fullBacteria_orig_k25/4.2_index_size.log](#05_fullbacteria_orig_k2542_index_sizelog)

***
## 01_1from10_bin_k31

### 01_1from10_bin_k31/1.1_kmer_propagation.log

```
User time:     0:36:40
System time:   0:00:57
Elapsed time:  0:02:38
CPU usage:        1428%

Memory peak:      1.12 GB
```

* 1993352inputs+3923184outputs (18major+36151903minor)pagefaults 0swaps


### 01_1from10_bin_k31/1.2_merging_fasta.log

```
User time:     0:00:55
System time:   0:00:02
Elapsed time:  0:01:00
CPU usage:          95%

Memory peak:      0.01 GB
```

* 16inputs+2539248outputs (0major+10133minor)pagefaults 0swaps


### 01_1from10_bin_k31/2.1_bwa_fa2pac.log

```
User time:     0:00:12
System time:   0:00:01
Elapsed time:  0:00:20
CPU usage:          68%

Memory peak:      1.36 GB
```

* 56inputs+1836576outputs (0major+431111minor)pagefaults 0swaps


### 01_1from10_bin_k31/2.2_bwa_pac2bwt.log

```
User time:     0:09:16
System time:   0:00:02
Elapsed time:  0:09:22
CPU usage:          99%

Memory peak:      9.95 GB
```

* 32inputs+1042696outputs (0major+71968minor)pagefaults 0swaps


### 01_1from10_bin_k31/2.3_bwa_bwtupdate.log

```
User time:     0:00:04
System time:   0:00:01
Elapsed time:  0:00:13
CPU usage:          43%

Memory peak:      1.49 GB
```

* 64inputs+2085384outputs (0major+2571minor)pagefaults 0swaps


### 01_1from10_bin_k31/2.4_bwa_bwt2sa.log

```
User time:     0:04:09
System time:   0:00:01
Elapsed time:  0:04:14
CPU usage:          99%

Memory peak:      1.49 GB
```

* 40inputs+1042696outputs (0major+28253minor)pagefaults 0swaps


### 01_1from10_bin_k31/2.5_klcp.log

```
User time:     0:12:01
System time:   0:00:02
Elapsed time:  0:12:06
CPU usage:         100%

Memory peak:      3.35 GB
```

* 32inputs+1042696outputs (0major+208325minor)pagefaults 0swaps
* pagefaults 0swaps


### 01_1from10_bin_k31/3.1_matching_rolling.log

```
User time:     0:01:57
System time:   0:00:03
Elapsed time:  0:02:01
CPU usage:          99%

Memory peak:      2.85 GB
```

* 538696inputs+876224outputs (0major+1976280minor)pagefaults 0swaps


### 01_1from10_bin_k31/3.2_matching_restarted.log

```
User time:     0:02:20
System time:   0:00:02
Elapsed time:  0:02:24
CPU usage:          99%

Memory peak:      2.85 GB
```

* 8inputs+876224outputs (0major+529133minor)pagefaults 0swaps


### 01_1from10_bin_k31/3.3_matching_rolling_skipping.log

```
User time:     0:01:56
System time:   0:00:03
Elapsed time:  0:02:00
CPU usage:          99%

Memory peak:      2.85 GB
```

* 0inputs+875328outputs (0major+1207249minor)pagefaults 0swaps


### 01_1from10_bin_k31/3.4_matching_restarted_skipping.log

```
User time:     0:02:16
System time:   0:00:02
Elapsed time:  0:02:19
CPU usage:          99%

Memory peak:      2.85 GB
```

* 0inputs+875328outputs (0major+606903minor)pagefaults 0swaps


### 01_1from10_bin_k31/4.1_contigs_stats.log
* Number of contigs: 8495372
* Total length: 1067712578
* Average length: 125.68167444580413

* Median length: 34.0
* Number of k-mer occurencies: 812851418


### 01_1from10_bin_k31/4.2_index_size.log
* 510M	index.fa.31.bit.klcp
* 388M	index.fa.ann
* 1019M	index.fa.bwt
* 510M	index.fa.pac
* 510M	index.fa.sa

***
## 02_1from10_bin_k25

### 02_1from10_bin_k25/1.1_kmer_propagation.log

```
User time:     0:35:47
System time:   0:00:54
Elapsed time:  0:02:28
CPU usage:        1482%

Memory peak:      1.12 GB
```

* 0inputs+4051568outputs (0major+35661341minor)pagefaults 0swaps


### 02_1from10_bin_k25/1.2_merging_fasta.log

```
User time:     0:01:04
System time:   0:00:02
Elapsed time:  0:01:09
CPU usage:          97%

Memory peak:      0.01 GB
```

* 0inputs+2676504outputs (0major+9120minor)pagefaults 0swaps


### 02_1from10_bin_k25/2.1_bwa_fa2pac.log

```
User time:     0:00:14
System time:   0:00:01
Elapsed time:  0:00:22
CPU usage:          71%

Memory peak:      1.62 GB
```

* 64inputs+2082440outputs (0major+562654minor)pagefaults 0swaps


### 02_1from10_bin_k25/2.2_bwa_pac2bwt.log

```
User time:     0:09:33
System time:   0:00:03
Elapsed time:  0:09:40
CPU usage:          99%

Memory peak:      9.97 GB
```

* 32inputs+1045704outputs (0major+69279minor)pagefaults 0swaps


### 02_1from10_bin_k25/2.3_bwa_bwtupdate.log

```
User time:     0:00:04
System time:   0:00:01
Elapsed time:  0:00:12
CPU usage:          46%

Memory peak:      1.50 GB
```

* 56inputs+2091408outputs (0major+2784minor)pagefaults 0swaps


### 02_1from10_bin_k25/2.4_bwa_bwt2sa.log

```
User time:     0:04:13
System time:   0:00:01
Elapsed time:  0:04:17
CPU usage:          99%

Memory peak:      1.50 GB
```

* 40inputs+1045704outputs (0major+29663minor)pagefaults 0swaps


### 02_1from10_bin_k25/2.5_klcp.log

```
User time:     0:08:57
System time:   0:00:01
Elapsed time:  0:09:02
CPU usage:          99%

Memory peak:      3.61 GB
```

* 32inputs+1045704outputs (0major+243180minor)pagefaults 0swaps


### 02_1from10_bin_k25/3.1_matching_rolling.log

```
User time:     0:02:07
System time:   0:00:02
Elapsed time:  0:02:10
CPU usage:          99%

Memory peak:      3.11 GB
```

* 0inputs+969608outputs (0major+1137163minor)pagefaults 0swaps


### 02_1from10_bin_k25/3.2_matching_restarted.log

```
User time:     0:02:27
System time:   0:00:02
Elapsed time:  0:02:30
CPU usage:          99%

Memory peak:      3.11 GB
```

* 0inputs+969608outputs (0major+665680minor)pagefaults 0swaps


### 02_1from10_bin_k25/3.3_matching_rolling_skipping.log

```
User time:     0:02:04
System time:   0:00:02
Elapsed time:  0:02:08
CPU usage:          99%

Memory peak:      3.11 GB
```

* 0inputs+967768outputs (0major+1132974minor)pagefaults 0swaps


### 02_1from10_bin_k25/3.4_matching_restarted_skipping.log

```
User time:     0:02:24
System time:   0:00:02
Elapsed time:  0:02:28
CPU usage:          99%

Memory peak:      3.11 GB
```

* 0inputs+967768outputs (0major+665672minor)pagefaults 0swaps


### 02_1from10_bin_k25/4.1_contigs_stats.log
* Number of contigs: 11066263
* Total length: 1070798058
* Average length: 96.76239015826752

* Median length: 28
* Number of k-mer occurencies: 805207746


### 02_1from10_bin_k25/4.2_index_size.log
* 511M	index.fa.25.bit.klcp
* 507M	index.fa.ann
* 1022M	index.fa.bwt
* 511M	index.fa.pac
* 511M	index.fa.sa

***
## 03_fullBacteria_orig_k31

### 03_fullBacteria_orig_k31/1.1_kmer_propagation.log

```
User time:     4:45:30
System time:   0:07:59
Elapsed time:  0:17:13
CPU usage:        1705%

Memory peak:      9.31 GB
```

* 19583480inputs+34175048outputs (10major+245765150minor)pagefaults 0swaps


### 03_fullBacteria_orig_k31/1.2_merging_fasta.log

```
User time:     0:09:47
System time:   0:00:22
Elapsed time:  0:12:03
CPU usage:          84%

Memory peak:      0.01 GB
```

* 16324488inputs+24270136outputs (23major+11009minor)pagefaults 0swaps


### 03_fullBacteria_orig_k31/2.1_bwa_fa2pac.log

```
User time:     0:02:11
System time:   0:00:33
Elapsed time:  0:03:49
CPU usage:          72%

Memory peak:     14.08 GB
```

* 1311144inputs+18388752outputs (4major+8261878minor)pagefaults 0swaps


### 03_fullBacteria_orig_k31/2.2_bwa_pac2bwt.log

```
User time:     6:21:23
System time:   0:30:17
Elapsed time:  6:52:45
CPU usage:         100%

Memory peak:     35.43 GB
```

* 9969024inputs+9968312outputs (0major+2338121734minor)pagefaults 0swaps


### 03_fullBacteria_orig_k31/2.3_bwa_bwtupdate.log

```
User time:     0:00:41
System time:   0:00:15
Elapsed time:  0:02:18
CPU usage:          42%

Memory peak:     14.26 GB
```

* 736inputs+19936624outputs (2major+16190minor)pagefaults 0swaps


### 03_fullBacteria_orig_k31/2.4_bwa_bwt2sa.log

```
User time:     0:43:05
System time:   0:00:13
Elapsed time:  0:43:57
CPU usage:          99%

Memory peak:     14.26 GB
```

* 304inputs+9968312outputs (0major+393132minor)pagefaults 0swaps


### 03_fullBacteria_orig_k31/2.5_klcp.log

```
User time:     1:52:56
System time:   0:02:29
Elapsed time:  1:56:24
CPU usage:          99%

Memory peak:     32.74 GB
```

* 18391320inputs+9968312outputs (16major+151808760minor)pagefaults 0swaps


### 03_fullBacteria_orig_k31/3.1_matching_rolling.log

```
User time:     0:08:09
System time:   0:01:05
Elapsed time:  0:10:52
CPU usage:          85%

Memory peak:     28.34 GB
```

* 49199136inputs+3989080outputs (3major+30277445minor)pagefaults 0swaps


### 03_fullBacteria_orig_k31/3.2_matching_restarted.log

```
User time:     0:10:16
System time:   0:00:40
Elapsed time:  0:12:16
CPU usage:          89%

Memory peak:     28.34 GB
```

* 34332288inputs+3989080outputs (3major+8415416minor)pagefaults 0swaps


### 03_fullBacteria_orig_k31/3.3_matching_rolling_skipping.log

```
User time:     0:07:57
System time:   0:00:55
Elapsed time:  0:10:04
CPU usage:          88%

Memory peak:     28.34 GB
```

* 29066176inputs+3988496outputs (7major+31483596minor)pagefaults 0swaps


### 03_fullBacteria_orig_k31/3.4_matching_restarted_skipping.log

```
User time:     0:10:59
System time:   0:00:27
Elapsed time:  0:12:37
CPU usage:          91%

Memory peak:     28.34 GB
```

* 26374728inputs+3988496outputs (4major+4325450minor)pagefaults 0swaps


### 03_fullBacteria_orig_k31/4.1_contigs_stats.log
* Number of contigs: 96088810
* Total length: 10207548814
* Average length: 106.23035933112294

* Median length: 34.0
* Number of k-mer occurencies: 7324884514


### 03_fullBacteria_orig_k31/4.2_index_size.log
* 4.8G	index.fa.31.bit.klcp
* 4.1G	index.fa.ann
* 9.6G	index.fa.bwt
* 4.8G	index.fa.pac
* 4.8G	index.fa.sa

***
## 04_fullBacteria_bin_k31

### 04_fullBacteria_bin_k31/1.1_kmer_propagation.log

```
User time:     6:09:22
System time:   0:09:53
Elapsed time:  0:21:09
CPU usage:        1792%

Memory peak:      1.85 GB
```

* 17757768inputs+38721120outputs (29major+341200480minor)pagefaults 0swaps


### 04_fullBacteria_bin_k31/1.2_merging_fasta.log

```
User time:     0:09:25
System time:   0:00:20
Elapsed time:  0:10:05
CPU usage:          97%

Memory peak:      0.01 GB
```

* 16inputs+24184152outputs (1major+15758minor)pagefaults 0swaps


### 04_fullBacteria_bin_k31/2.1_bwa_fa2pac.log

```
User time:     0:02:09
System time:   0:00:44
Elapsed time:  0:04:09
CPU usage:          69%

Memory peak:     14.49 GB
```

* 6428320inputs+18973616outputs (0major+9246105minor)pagefaults 0swaps


### 04_fullBacteria_bin_k31/2.2_bwa_pac2bwt.log

```
User time:     0:13:39
System time:   0:01:28
Elapsed time:  0:15:41
CPU usage:          96%

Memory peak:     25.51 GB
```

* 201296inputs+9385680outputs (2major+60551661minor)pagefaults 0swaps


### 04_fullBacteria_bin_k31/2.3_bwa_bwtupdate.log

```
User time:     0:00:40
System time:   0:00:30
Elapsed time:  0:02:27
CPU usage:          48%

Memory peak:     13.43 GB
```

* 608inputs+18771360outputs (1major+6767565minor)pagefaults 0swaps


### 04_fullBacteria_bin_k31/2.4_bwa_bwt2sa.log

```
User time:     0:56:19
System time:   0:02:07
Elapsed time:  0:59:02
CPU usage:          99%

Memory peak:     13.43 GB
```

* 304inputs+9385680outputs (0major+179809956minor)pagefaults 0swaps


### 04_fullBacteria_bin_k31/2.5_klcp.log

```
User time:     1:06:14
System time:   0:03:09
Elapsed time:  1:10:22
CPU usage:          99%

Memory peak:     32.39 GB
```

* 10740272inputs+9385680outputs (11major+250341694minor)pagefaults 0swaps


### 04_fullBacteria_bin_k31/3.1_matching_rolling.log

```
User time:     0:03:19
System time:   0:00:48
Elapsed time:  0:05:31
CPU usage:          75%

Memory peak:     27.91 GB
```

* 45670816inputs+609392outputs (3major+6520060minor)pagefaults 0swaps


### 04_fullBacteria_bin_k31/3.2_matching_restarted.log

```
User time:     0:03:01
System time:   0:00:32
Elapsed time:  0:03:53
CPU usage:          92%

Memory peak:     27.91 GB
```

* 14731720inputs+609392outputs (3major+6650028minor)pagefaults 0swaps


### 04_fullBacteria_bin_k31/3.3_matching_rolling_skipping.log

```
User time:     0:03:18
System time:   0:01:06
Elapsed time:  0:05:24
CPU usage:          82%

Memory peak:     27.91 GB
```

* 27087312inputs+609392outputs (5major+25039658minor)pagefaults 0swaps


### 04_fullBacteria_bin_k31/3.4_matching_restarted_skipping.log

```
User time:     0:03:20
System time:   0:01:11
Elapsed time:  0:05:35
CPU usage:          81%

Memory peak:     27.91 GB
```

* 35382296inputs+609392outputs (6major+24550102minor)pagefaults 0swaps


### 04_fullBacteria_bin_k31/4.1_contigs_stats.log
* Number of contigs: 97676559
* Total length: 9610935189
* Average length: 98.39551359502744

* Median length: 34
* Number of k-mer occurencies: 6680638419


### 04_fullBacteria_bin_k31/4.2_index_size.log
* 4.5G	index.fa.31.bit.klcp
* 4.6G	index.fa.ann
* 9.0G	index.fa.bwt
* 4.5G	index.fa.pac
* 4.5G	index.fa.sa

***
## 05_fullBacteria_orig_k25

### 05_fullBacteria_orig_k25/1.1_kmer_propagation.log

```
User time:     4:38:41
System time:   0:08:24
Elapsed time:  0:17:19
CPU usage:        1657%

Memory peak:      9.30 GB
```

* 20007616inputs+34802888outputs (76major+251572187minor)pagefaults 0swaps


### 05_fullBacteria_orig_k25/1.2_merging_fasta.log

```
User time:     0:11:01
System time:   0:00:23
Elapsed time:  0:12:40
CPU usage:          90%

Memory peak:      0.01 GB
```

* 8130888inputs+25055304outputs (1major+29649minor)pagefaults 0swaps


### 05_fullBacteria_orig_k25/2.1_bwa_fa2pac.log

```
User time:     0:02:25
System time:   0:00:34
Elapsed time:  0:04:19
CPU usage:          69%

Memory peak:     16.32 GB
```

* 3103792inputs+20364120outputs (3major+10480601minor)pagefaults 0swaps


### 05_fullBacteria_orig_k25/2.2_bwa_pac2bwt.log

```
User time:     6:15:37
System time:   0:31:30
Elapsed time:  6:48:21
CPU usage:         100%

Memory peak:     36.00 GB
```

* 9852968inputs+9851904outputs (3major+2546509543minor)pagefaults 0swaps


### 05_fullBacteria_orig_k25/2.3_bwa_bwtupdate.log

```
User time:     0:00:41
System time:   0:00:14
Elapsed time:  0:02:16
CPU usage:          41%

Memory peak:     14.10 GB
```

* 504inputs+19703808outputs (0major+15014minor)pagefaults 0swaps


### 05_fullBacteria_orig_k25/2.4_bwa_bwt2sa.log

```
User time:     0:42:28
System time:   0:00:09
Elapsed time:  0:43:19
CPU usage:          98%

Memory peak:     14.10 GB
```

* 296inputs+9851904outputs (0major+395687minor)pagefaults 0swaps


### 05_fullBacteria_orig_k25/2.5_klcp.log

```
User time:     1:24:22
System time:   0:02:50
Elapsed time:  1:28:06
CPU usage:          99%

Memory peak:     35.11 GB
```

* 14685080inputs+9851904outputs (4major+120254150minor)pagefaults 0swaps


### 05_fullBacteria_orig_k25/3.1_matching_rolling.log

```
User time:     0:09:19
System time:   0:00:50
Elapsed time:  0:11:19
CPU usage:          90%

Memory peak:     30.42 GB
```

* 34686488inputs+4621104outputs (5major+17851141minor)pagefaults 0swaps


### 05_fullBacteria_orig_k25/3.2_matching_restarted.log

```
User time:     0:11:22
System time:   0:00:46
Elapsed time:  0:13:18
CPU usage:          91%

Memory peak:     30.42 GB
```

* 31476432inputs+4621104outputs (3major+13806482minor)pagefaults 0swaps


### 05_fullBacteria_orig_k25/3.3_matching_rolling_skipping.log

```
User time:     0:09:20
System time:   0:00:56
Elapsed time:  0:11:26
CPU usage:          90%

Memory peak:     30.42 GB
```

* 29245880inputs+4620360outputs (1major+33789377minor)pagefaults 0swaps


### 05_fullBacteria_orig_k25/3.4_matching_restarted_skipping.log

```
User time:     0:11:26
System time:   0:00:47
Elapsed time:  0:13:24
CPU usage:          91%

Memory peak:     30.42 GB
```

* 28265888inputs+4620360outputs (1major+19498560minor)pagefaults 0swaps


### 05_fullBacteria_orig_k25/4.1_contigs_stats.log
* Number of contigs: 119833825
* Total length: 10088349135
* Average length: 84.18615641284921

* Median length: 28
* Number of k-mer occurencies: 7212337335


### 05_fullBacteria_orig_k25/4.2_index_size.log
* 4.7G	index.fa.25.bit.klcp
* 5.1G	index.fa.ann
* 9.4G	index.fa.bwt
* 4.7G	index.fa.pac
* 4.7G	index.fa.sa
