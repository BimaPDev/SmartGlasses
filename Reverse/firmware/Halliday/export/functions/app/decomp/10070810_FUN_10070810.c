/* FUN_10070810 @ 0x10070810 */

void FUN_10070810(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = DAT_1007089c;
  puVar1 = DAT_10070898;
  *DAT_10070898 = DAT_1007089c;
  FUN_101153fc(10,0,param_3,uVar2,param_4);
  *puVar1 = *puVar1 | 0x40;
  iVar4 = 0xc;
  FUN_101153fc(10,0);
  *puVar1 = *puVar1 | 0x180;
  while( true ) {
    iVar3 = *puVar1 << 10;
    if (-1 < iVar3) break;
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      FUN_10119dc2(DAT_100708a0);
      break;
    }
    FUN_101153fc(1,0,iVar3,*puVar1,param_4);
  }
  puVar1 = DAT_10070898;
  iVar4 = 0x34;
  while( true ) {
    iVar5 = 3;
    iVar3 = 0;
    do {
      if ((int)(*puVar1 << 10) < 0) {
        iVar3 = iVar3 + 1;
      }
      FUN_1011598c(10);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (iVar3 == 3) goto LAB_10070872;
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) break;
    FUN_101153fc(1,0);
  }
  FUN_10119dc2(DAT_100708a4);
LAB_10070872:
  *DAT_10070898 = DAT_100708a8 | ((int)*DAT_10070898 >> 0x16) << 0xb;
  return;
}

