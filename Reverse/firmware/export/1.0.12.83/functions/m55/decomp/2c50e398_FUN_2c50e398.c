/* FUN_2c50e398 @ 0x2c50e398 */

void FUN_2c50e398(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  short *psVar1;
  int iVar2;
  undefined4 uVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = FUN_2c606c34();
  psVar1 = DAT_2c50e654;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c50e644,0xb2,DAT_2c50e648,DAT_2c50e640,param_1,param_3,param_4,param_2);
  }
  sVar4 = (short)param_3;
  switch(param_2) {
  case 1:
    FUN_2c606d90(param_1,param_3 & 0xff,0);
    return;
  case 2:
  case 3:
  case 8:
    uVar5 = param_3 & 0xff;
    break;
  case 4:
    FUN_2c606d90(param_1,param_3 & 0xff,0);
    uVar5 = 0;
    if (param_3 == 0xff) {
      uVar5 = 0x19;
    }
    break;
  case 5:
    if (param_4 == 0) {
      FUN_2c606d6c(param_1,param_3 & 0xff,0);
      iVar7 = DAT_2c50e658;
      iVar6 = 0xff - param_3;
      iVar2 = iVar6 * ((int)psVar1[1] - (int)*psVar1);
      FUN_2c606fa8(param_1,(int)(short)(((short)(iVar2 >> 0x1f) -
                                        (short)((int)((ulonglong)
                                                      ((longlong)DAT_2c50e658 * (longlong)iVar2) >>
                                                     0x20) + iVar2 >> 6)) + psVar1[1]));
      iVar2 = iVar6 * ((int)psVar1[3] - (int)psVar1[2]);
      FUN_2c6070bc(param_1,(int)(short)(((short)(iVar2 >> 0x1f) -
                                        (short)((int)((ulonglong)((longlong)iVar7 * (longlong)iVar2)
                                                     >> 0x20) + iVar2 >> 6)) + psVar1[3]));
      iVar2 = iVar6 * ((int)psVar1[5] - (int)psVar1[4]);
      FUN_2c60710c(param_1,(int)(short)(((short)(iVar2 >> 0x1f) -
                                        (short)((int)((ulonglong)((longlong)iVar7 * (longlong)iVar2)
                                                     >> 0x20) + iVar2 >> 6)) + psVar1[5]));
      iVar6 = ((int)psVar1[7] - (int)psVar1[6]) * iVar6;
      iVar2 = (int)((longlong)iVar7 * (longlong)iVar6);
      sVar4 = ((short)(iVar6 >> 0x1f) -
              (short)((int)((ulonglong)((longlong)iVar7 * (longlong)iVar6) >> 0x20) + iVar6 >> 6)) +
              psVar1[7];
    }
    else {
      FUN_2c606d6c(param_1,param_3 & 0xff,0);
      iVar7 = DAT_2c50e658;
      iVar6 = param_3 - 0x99;
      iVar2 = iVar6 * ((int)psVar1[1] - (int)*psVar1);
      FUN_2c606fa8(param_1,(int)(short)(((short)((int)((ulonglong)
                                                       ((longlong)DAT_2c50e658 * (longlong)iVar2) >>
                                                      0x20) + iVar2 >> 6) - (short)(iVar2 >> 0x1f))
                                       + *psVar1));
      iVar2 = iVar6 * ((int)psVar1[3] - (int)psVar1[2]);
      FUN_2c6070bc(param_1,(int)(short)(((short)((int)((ulonglong)
                                                       ((longlong)iVar7 * (longlong)iVar2) >> 0x20)
                                                 + iVar2 >> 6) - (short)(iVar2 >> 0x1f)) + psVar1[2]
                                       ));
      iVar2 = iVar6 * ((int)psVar1[5] - (int)psVar1[4]);
      FUN_2c60710c(param_1,(int)(short)(((short)((int)((ulonglong)
                                                       ((longlong)iVar7 * (longlong)iVar2) >> 0x20)
                                                 + iVar2 >> 6) - (short)(iVar2 >> 0x1f)) + psVar1[4]
                                       ));
      param_4 = 0;
      iVar6 = ((int)psVar1[7] - (int)psVar1[6]) * iVar6;
      iVar2 = (int)((longlong)iVar7 * (longlong)iVar6);
      sVar4 = ((short)(iVar6 + (int)((ulonglong)((longlong)iVar7 * (longlong)iVar6) >> 0x20) >> 6) -
              (short)(iVar6 >> 0x1f)) + psVar1[6];
    }
LAB_2c50e4d4:
    FUN_2c606e68(param_1,(int)sVar4,param_4,iVar2);
    return;
  case 6:
    if (param_4 == 0) {
      FUN_2c607048(param_1,(int)sVar4);
      iVar7 = param_3 * 0x10;
      iVar2 = iVar7 >> 0x1f;
      sVar4 = (short)((int)((ulonglong)((longlong)DAT_2c50e664 * (longlong)iVar7) >> 0x20) + iVar7
                     >> 4) - (short)(iVar7 >> 0x1f);
      goto LAB_2c50e4d4;
    }
    FUN_2c607048(param_1,(int)sVar4);
    iVar7 = DAT_2c50e65c;
    iVar2 = param_3 * 0x11;
    FUN_2c606e68(param_1,(int)(short)((short)((int)((ulonglong)
                                                    ((longlong)DAT_2c50e65c * (longlong)iVar2) >>
                                                   0x20) + iVar2 >> 4) - (short)(iVar2 >> 0x1f)),0);
    iVar2 = (param_3 & 0xffff) * 0xfa;
    if (((int)((ulonglong)((longlong)iVar7 * (longlong)iVar2) >> 0x20) + iVar2 & 0xfffffU) >> 4 <
        0x97) {
      iVar2 = param_3 * 0xf906;
      uVar5 = ((int)((ulonglong)((longlong)DAT_2c50e660 * (longlong)iVar2) >> 0x20) + iVar2 >> 0xc)
              - (iVar2 >> 0x1f) & 0xff;
    }
    else {
      uVar5 = 0xff;
    }
    break;
  case 7:
    if (param_4 != 0) {
      FUN_2c60710c(param_1,(int)sVar4);
      return;
    }
    uVar3 = FUN_2c6041d4(param_1);
    iVar2 = FUN_2c6041dc(uVar3,1);
    if (iVar2 != 0) {
      FUN_2c6070bc(iVar2,(int)sVar4);
      return;
    }
  default:
    return;
  }
  FUN_2c606d6c(param_1,uVar5,0);
  return;
}

