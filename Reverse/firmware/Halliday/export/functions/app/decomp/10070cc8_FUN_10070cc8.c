/* FUN_10070cc8 @ 0x10070cc8 */

void FUN_10070cc8(void)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined2 local_24 [12];
  
  iVar5 = DAT_10070e0c;
  iVar4 = *(int *)(DAT_10070e0c + 0x6c);
  if ((iVar4 == 0) || (*(short *)(iVar4 + 0x2ff18000) == *(short *)(&DAT_2ff18004 + iVar4)))
  goto LAB_10070d46;
  FUN_1011ea48(local_24,0,0x14);
  iVar4 = FUN_1011f622(DAT_10070e10);
  if ((iVar4 == 0) &&
     (sVar1 = FUN_1011f658(*(undefined4 *)(iVar5 + 0x6c),local_24,0x14), sVar1 == 0x14)) {
    switch(local_24[0]) {
    case 0x403:
      thunk_FUN_10113fd0(DAT_10070e18);
      uVar3 = 2;
      uVar2 = DAT_10070e1c;
      break;
    default:
      FUN_100a5b78(DAT_10070e3c | (DAT_10070e38 - DAT_10070e34) * 0x20 & 0xff00U,DAT_10070e44,
                   DAT_10070e40);
      goto LAB_10070d2e;
    case 0x407:
      uVar3 = 1;
      *(undefined2 *)(DAT_10070e14 + 0x14) = 0;
      uVar2 = DAT_10070e10;
      break;
    case 0x408:
      uVar3 = 2;
      *(undefined2 *)(DAT_10070e14 + 0x14) = 0x4c;
      uVar2 = DAT_10070e10;
      break;
    case 0x409:
      uVar3 = 4;
      *(undefined2 *)(DAT_10070e14 + 0x14) = 0;
      uVar2 = DAT_10070e10;
      break;
    case 0x40a:
      uVar3 = 8;
      *(undefined2 *)(DAT_10070e14 + 0x14) = 100;
      uVar2 = DAT_10070e10;
    }
    FUN_1011f642(uVar2,uVar3);
LAB_10070d2e:
    iVar4 = FUN_1011f622(DAT_10070e10);
    if (0 < iVar4) {
      FUN_100722e0(DAT_10070e14);
    }
  }
  *DAT_10070e20 = *DAT_10070e20 + 1;
LAB_10070d46:
  iVar4 = *(int *)(iVar5 + 0x74);
  if ((iVar4 != 0) && (*(short *)(iVar4 + 0x2ff18000) != *(short *)(&DAT_2ff18004 + iVar4))) {
    thunk_FUN_10113fd0(DAT_10070e24);
    *DAT_10070e20 = *DAT_10070e20 + 1;
  }
  iVar5 = *(int *)(iVar5 + 0x78);
  if ((iVar5 != 0) && (*(short *)(iVar5 + 0x2ff18000) != *(short *)(&DAT_2ff18004 + iVar5))) {
    thunk_FUN_10113fd0(DAT_10070e28);
  }
  iVar5 = FUN_1011f622(DAT_10070e1c);
  if ((iVar5 << 0x1d < 0) && (*(char *)(*DAT_10070e2c + 9) == *(char *)(*DAT_10070e30 + 9))) {
    FUN_1011f62c(DAT_10070e1c,0xfffffffb);
  }
  iVar5 = FUN_1011f622(DAT_10070e1c);
  if ((iVar5 << 0x1c < 0) && (*(char *)(DAT_10070e2c[1] + 9) == *(char *)(DAT_10070e30[1] + 9))) {
    FUN_1011f62c(DAT_10070e1c,0xfffffff7);
  }
  return;
}

