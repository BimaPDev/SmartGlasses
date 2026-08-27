/* FUN_2c13c492 @ 0x2c13c492 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c13c492(int param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  iStack_1c = *_DAT_2c13c738;
  uStack_34 = param_4;
  uStack_30 = param_4;
  if ((int)(param_2 << 0x1d) < 0) {
    if ((param_3 & 2) == 0) {
      FUN_2c135988(4,0x1a3,_DAT_2c13c744,_DAT_2c13c740,_DAT_2c13c760);
      *(undefined1 *)(param_1 + 0x6c) = 0;
    }
    if ((param_3 & 8) == 0) {
      FUN_2c135988(4,0x1a9,_DAT_2c13c744,_DAT_2c13c740,_DAT_2c13c75c);
      *(byte *)(param_1 + 0x6d) = (byte)param_3 & 8;
    }
  }
  if ((param_2 & 2) != 0) {
    if (((int)(param_3 << 0x1e) < 0) && (*(byte *)(param_1 + 0x6c) == 0)) {
      uStack_2c = (uint)*(byte *)(param_1 + 0x6c);
      iVar3 = FUN_2c13bc94(0x500,&uStack_2c);
      if (iVar3 == 0) {
        *(uint *)(param_1 + 0x70) = uStack_2c;
        uVar5 = uStack_2c;
      }
      else {
        FUN_2c135988(4,0x332,_DAT_2c13c744,_DAT_2c13c740,_DAT_2c13c76c);
        uVar5 = *(uint *)(param_1 + 0x70);
      }
      FUN_2c135988(4,0x1b4,_DAT_2c13c744,_DAT_2c13c740,_DAT_2c13c764,uVar5);
      *(undefined1 *)(param_1 + 0x6c) = 1;
    }
    if (((int)(param_3 << 0x1c) < 0) && (*(byte *)(param_1 + 0x6d) == 0)) {
      uStack_28 = (uint)*(byte *)(param_1 + 0x6d);
      iVar3 = FUN_2c13bc94(0x508,&uStack_28);
      if (iVar3 == 0) {
        *(uint *)(param_1 + 0x78) = uStack_28;
        uVar5 = uStack_28;
      }
      else {
        FUN_2c135988(4,0x332,_DAT_2c13c744,_DAT_2c13c740,_DAT_2c13c76c);
        uVar5 = *(uint *)(param_1 + 0x78);
      }
      FUN_2c135988(4,0x1bc,_DAT_2c13c744,_DAT_2c13c740,_DAT_2c13c758,uVar5);
      *(undefined1 *)(param_1 + 0x6d) = 1;
    }
    goto LAB_2c13c4d6;
  }
  if (-1 < (int)(param_2 << 0x12)) goto LAB_2c13c4d6;
  FUN_2c13bc94(400,&uStack_34);
  FUN_2c13bc94(0x104,&uStack_30);
  uStack_30 = uStack_30 & 0xff;
  if ((int)(uStack_34 << 0x1f) < 0) {
    uStack_24 = param_2 & 2;
    iVar3 = FUN_2c13bc94(0x500,&uStack_24);
    if (iVar3 == 0) {
      *(uint *)(param_1 + 0x74) = uStack_24;
      uVar5 = uStack_24;
    }
    else {
      FUN_2c135988(4,0x332,_DAT_2c13c744,_DAT_2c13c740,_DAT_2c13c76c);
      uVar5 = *(uint *)(param_1 + 0x74);
    }
    FUN_2c135988(4,0x1c9,_DAT_2c13c744,_DAT_2c13c740,_DAT_2c13c768,uVar5);
    iVar3 = *(int *)(param_1 + 0x70);
    iVar4 = *(int *)(param_1 + 0x74);
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    iVar3 = iVar3 - iVar4;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (iVar3 <= _DAT_2c13c748) goto LAB_2c13c510;
    *(undefined1 *)(param_1 + 0x6c) = 0;
    uStack_30 = uStack_30 | 0x200;
    if ((int)(uStack_34 << 0x1e) < 0) {
      bVar1 = true;
      goto LAB_2c13c516;
    }
  }
  else {
LAB_2c13c510:
    if (-1 < (int)(uStack_34 << 0x1e)) goto LAB_2c13c4d6;
    bVar1 = false;
LAB_2c13c516:
    uStack_20 = 0;
    iVar3 = FUN_2c13bc94(0x508,&uStack_20);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x7c) = uStack_20;
      uVar6 = uStack_20;
    }
    else {
      FUN_2c135988(4,0x332,_DAT_2c13c744,_DAT_2c13c740,_DAT_2c13c76c);
      uVar6 = *(undefined4 *)(param_1 + 0x7c);
    }
    FUN_2c135988(4,0x1d5,_DAT_2c13c744,_DAT_2c13c740,_DAT_2c13c73c,uVar6);
    iVar3 = *(int *)(param_1 + 0x78);
    iVar4 = *(int *)(param_1 + 0x7c);
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    iVar3 = iVar3 - iVar4;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (_DAT_2c13c748 < iVar3) {
      *(undefined1 *)(param_1 + 0x6d) = 0;
      uStack_30 = uStack_30 | 0x800;
    }
    else if (!bVar1) goto LAB_2c13c4d6;
  }
  FUN_2c135988(4,0x1df,_DAT_2c13c744,_DAT_2c13c740,_DAT_2c13c74c,uStack_30);
  uVar5 = FUN_2c13c41c(0x104,uStack_30);
  uStack_30 = 10;
  uVar2 = FUN_2c13c41c(0x100);
  FUN_2c13bc94(0x100,&uStack_30);
  if ((uVar5 | uVar2) != 0) {
    FUN_2c135988(4,0x1e9,_DAT_2c13c744,_DAT_2c13c740,_DAT_2c13c754,_DAT_2c13c750,uVar5 | uVar2,
                 uStack_30);
  }
LAB_2c13c4d6:
  if (*_DAT_2c13c738 == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c13424c();
}

