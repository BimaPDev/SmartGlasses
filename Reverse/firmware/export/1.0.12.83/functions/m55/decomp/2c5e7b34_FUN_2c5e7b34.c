/* FUN_2c5e7b34 @ 0x2c5e7b34 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5e7b34(undefined4 *param_1)

{
  short sVar1;
  byte bVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = _LAB_2c5e7e18;
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5e7e14,0x51,_LAB_2c5e7e10,_LAB_2c5e7e0c);
  }
  uVar4 = FUN_2c606a10(*_LAB_2c5e7dfc);
  FUN_2c603a04(uVar4,0,_DAT_2c5e7e00);
  *param_1 = uVar4;
  FUN_2c606d00(uVar4,0x144,0);
  FUN_2c606d0c(uVar4,0);
  FUN_2c606e68(uVar4,0x10,0);
  FUN_2c606d9c(uVar4,1,0);
  FUN_2c606d84(uVar4,0xff00ff00,0);
  FUN_2c606d90(uVar4,0x4c,0);
  FUN_2c607048(uVar4,0x144,0x27d1);
  FUN_2c606d6c(uVar4,0xff,0);
  FUN_2c606d60(uVar4,0xff000000,0);
  uVar5 = FUN_2c606a10(uVar4);
  FUN_2c607048(uVar5,0x144,0x27d1);
  FUN_2c606d6c(uVar5,0);
  FUN_2c606d30(uVar5,0xc,0);
  FUN_2c606d3c(uVar5,0xc,0);
  FUN_2c606d18(uVar5,0xc,0);
  FUN_2c606d24(uVar5,0xc,0);
  FUN_2c606d9c(uVar5,0);
  FUN_2c606e68(uVar5,0);
  FUN_2c606abc(uVar5,0x10);
  FUN_2c606abc(uVar5,2);
  uVar6 = FUN_2c6313f4(uVar5);
  FUN_2c63140c(uVar6,param_1[1]);
  FUN_2c6072bc(uVar6,1,0);
  FUN_2c607048(uVar6,0x30);
  uVar6 = FUN_2c637344(uVar5);
  FUN_2c6072bc(uVar6,3,0);
  FUN_2c606d18(uVar6,1,0);
  FUN_2c606e20(uVar6,*(uint *)(iVar9 + 0x134) | 0xff000000,0);
  FUN_2c606e2c(uVar6,*(undefined1 *)(iVar9 + 0x138),0);
  uVar7 = FUN_2c5e2e58(_LAB_2c5e7e04);
  FUN_2c606e38(uVar6,uVar7,0);
  FUN_2c6388dc(uVar6,1);
  FUN_2c607048(uVar6,0xf0,0x1c);
  if (*(char *)(param_1 + 10) == '\0') {
    uVar7 = param_1[2];
  }
  else {
    uVar7 = registry_lookup(param_1[7]);
  }
  FUN_2c638730(uVar6,uVar7);
  uVar7 = FUN_2c637344(uVar5);
  FUN_2c608808(uVar7,uVar6,0xd,0,4);
  FUN_2c607048(uVar7,0xf0,0x27d1);
  FUN_2c606e20(uVar7,*(uint *)(iVar9 + 0x134) | 0xff000000,0);
  FUN_2c606e2c(uVar7,*(undefined1 *)(iVar9 + 0x138),0);
  uVar6 = FUN_2c5e2e58(_LAB_2c5e7e04);
  FUN_2c606e38(uVar7,uVar6,0);
  FUN_2c6388dc(uVar7,1);
  iVar8 = FUN_2c6033b4(uVar7,0,0x57);
  sVar1 = *(short *)(iVar8 + 8);
  if (*(char *)(param_1 + 10) == '\0') {
    uVar6 = param_1[3];
  }
  else {
    uVar6 = registry_lookup(param_1[8]);
  }
  FUN_2c638730(uVar7,uVar6);
  FUN_2c60710c(uVar7,(int)(short)(sVar1 * 6));
  uVar5 = FUN_2c637344(uVar5);
  FUN_2c608808(uVar5,uVar7,0xd,0,10);
  FUN_2c606e20(uVar5,*(uint *)(iVar9 + 0x134) | 0xff000000,0);
  FUN_2c606e2c(uVar5,0x99,0);
  uVar6 = FUN_2c5e2e58(_LAB_2c5e7e08);
  FUN_2c606e38(uVar5,uVar6,0);
  FUN_2c607048(uVar5,0xf0,0x27d1);
  if (*(char *)(param_1 + 10) == '\0') {
    uVar6 = param_1[4];
  }
  else {
    uVar6 = registry_lookup(param_1[9]);
  }
  FUN_2c638730(uVar5,uVar6);
  uVar5 = *param_1;
  if (*(char *)(param_1 + 10) == '\0') {
    uVar6 = param_1[4];
  }
  else {
    uVar6 = registry_lookup(param_1[9]);
  }
  FUN_2c5e73f8(uVar5,uVar6,*(undefined1 *)((int)param_1 + 0x42),*(undefined1 *)((int)param_1 + 0x41)
              );
  pcVar3 = DAT_2c608cb8;
  if (*DAT_2c608cb8 == '\0') {
    *DAT_2c608cb8 = '\x01';
    iVar9 = FUN_2c604178(uVar4);
    bVar2 = *(byte *)(iVar9 + 0x22);
    while ((int)((uint)bVar2 << 0x1e) < 0) {
      *(byte *)(iVar9 + 0x22) = *(byte *)(iVar9 + 0x22) & 0xfd;
      FUN_2c608744(iVar9);
      bVar2 = *(byte *)(iVar9 + 0x22);
    }
    *pcVar3 = '\0';
    return;
  }
  return;
}

