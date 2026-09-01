/* FUN_10011f14 @ 0x10011f14 */

void FUN_10011f14(int param_1,int param_2)

{
  undefined1 auStack_28 [2];
  undefined2 local_26;
  int local_14;
  
  local_14 = *DAT_10011fdc;
  FUN_100a5b78(DAT_10011fe8 | (DAT_10011fe0 - DAT_10011fe4) * 0x20 & 0xff00U,DAT_10011ff0,
               DAT_10011fec,param_2,param_1);
  if (param_2 == 1) goto LAB_10011f74;
  if (param_1 != 1) goto LAB_10011f80;
  FUN_10011ed0();
  FUN_10084080(0x3c,DAT_10011ff4);
  thunk_FUN_1009efe8(DAT_10011ffc,DAT_10011ff8,5);
  FUN_1012d1ae(0);
  while( true ) {
    if (*DAT_10011fdc == local_14) break;
    FUN_1013cdc0();
LAB_10011f74:
    if (param_1 != 1) {
      FUN_100840a8(0x3c,DAT_10011ff4);
LAB_10011f80:
      if (param_1 == 2) {
        FUN_10011ed0();
        FUN_10012c18(DAT_10012000,0);
        thunk_FUN_1009efe8(DAT_10012008,DAT_10012004,4);
        thunk_FUN_1009efe8(DAT_10011ffc,DAT_1001200c,5);
        FUN_1012d1ae(0);
        FUN_10056ae4(2,1);
        FUN_10012bb4();
        FUN_100a1a14(1);
        FUN_1011ea48(auStack_28,0,0x14);
        local_26 = 0x211;
        FUN_1009ece8(DAT_10012010,auStack_28);
      }
    }
  }
  return;
}

