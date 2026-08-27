/* FUN_2c5e9924 @ 0x2c5e9924 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5e9924(int *param_1)

{
  short sVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = _LAB_2c5e9be0;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5e9bdc,0x29,_LAB_2c5e9bd8,_LAB_2c5e9bd4);
  }
  iVar4 = FUN_2c606a10(*_LAB_2c5e9bc4);
  FUN_2c603a04(iVar4,0,_DAT_2c5e9bc8);
  *param_1 = iVar4;
  *(undefined4 *)(iVar4 + 0x10) = 1;
  FUN_2c606d00(iVar4,0x144,0);
  FUN_2c606d0c(iVar4,0);
  FUN_2c606e68(iVar4,0x10,0);
  FUN_2c606d9c(iVar4,1,0);
  FUN_2c606d84(iVar4,0xff00ff00,0);
  FUN_2c606d90(iVar4,0x4c,0);
  FUN_2c606d6c(iVar4,0xff,0);
  FUN_2c606d60(iVar4,0xff000000,0);
  FUN_2c607048(iVar4,0x144,0x27d1);
  uVar5 = FUN_2c606a10(iVar4);
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
  FUN_2c63140c(uVar6,param_1[3]);
  FUN_2c6072bc(uVar6,1,0,2);
  FUN_2c607048(uVar6,0x30);
  iVar7 = FUN_2c637344(uVar5);
  param_1[1] = iVar7;
  FUN_2c6072bc(iVar7,3,0);
  FUN_2c606e20(param_1[1],*(uint *)(iVar8 + 0x134) | 0xff000000,0);
  FUN_2c606e2c(param_1[1],*(undefined1 *)(iVar8 + 0x138),0);
  iVar7 = param_1[1];
  uVar6 = FUN_2c5e2e58(_LAB_2c5e9bcc);
  FUN_2c606e38(iVar7,uVar6,0);
  FUN_2c6388dc(param_1[1],1);
  iVar7 = FUN_2c6033b4(param_1[1],0,0x57);
  sVar1 = *(short *)(iVar7 + 8);
  FUN_2c638730(param_1[1],param_1[0xf]);
  FUN_2c607048(param_1[1],0xf0,(int)(short)(sVar1 << 1));
  iVar7 = FUN_2c637344(uVar5);
  param_1[2] = iVar7;
  FUN_2c608808(iVar7,param_1[1],0xd,0,4);
  FUN_2c606e20(param_1[2],*(uint *)(iVar8 + 0x134) | 0xff000000,0);
  FUN_2c606e2c(param_1[2],*(undefined1 *)(iVar8 + 0x138),0);
  iVar7 = param_1[2];
  uVar6 = FUN_2c5e2e58(_LAB_2c5e9bcc);
  FUN_2c606e38(iVar7,uVar6,0);
  FUN_2c6388dc(param_1[2],1);
  iVar7 = FUN_2c6033b4(param_1[2],0,0x57);
  sVar1 = *(short *)(iVar7 + 8);
  FUN_2c638730(param_1[2],param_1[5]);
  FUN_2c607048(param_1[2],0xf0,(int)(short)(sVar1 * 5));
  if (param_1[9] != 0) {
    uVar5 = FUN_2c637344(uVar5);
    FUN_2c608808(uVar5,param_1[2],0xd,0,10);
    FUN_2c606e20(uVar5,*(uint *)(iVar8 + 0x134) | 0xff000000,0);
    FUN_2c606e2c(uVar5,0x99,0);
    uVar6 = FUN_2c5e2e58(_LAB_2c5e9bd0);
    FUN_2c606e38(uVar5,uVar6,0);
    FUN_2c6388dc(uVar5,1);
    iVar8 = FUN_2c6033b4(uVar5,0,0x57);
    sVar1 = *(short *)(iVar8 + 8);
    FUN_2c638730(uVar5,param_1[9]);
    FUN_2c607048(uVar5,0xf0,(int)(short)(sVar1 << 1));
    FUN_2c5e73f8(*param_1,param_1[9],(char)param_1[0x13],0);
  }
  pcVar3 = DAT_2c608cb8;
  if (*DAT_2c608cb8 == '\0') {
    *DAT_2c608cb8 = '\x01';
    iVar8 = FUN_2c604178(iVar4);
    bVar2 = *(byte *)(iVar8 + 0x22);
    while ((int)((uint)bVar2 << 0x1e) < 0) {
      *(byte *)(iVar8 + 0x22) = *(byte *)(iVar8 + 0x22) & 0xfd;
      FUN_2c608744(iVar8);
      bVar2 = *(byte *)(iVar8 + 0x22);
    }
    *pcVar3 = '\0';
    return;
  }
  return;
}

