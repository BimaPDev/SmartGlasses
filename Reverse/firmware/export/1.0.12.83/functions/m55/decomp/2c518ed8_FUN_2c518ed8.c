/* FUN_2c518ed8 @ 0x2c518ed8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c518ed8(int param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  undefined4 uStack_24;
  ushort uStack_20;
  ushort uStack_1e;
  int iStack_1c;
  
  iStack_1c = *_LAB_2c519070;
  FUN_2c607df0();
  iVar3 = FUN_2c614f58(param_2);
  if (iVar3 == 3) {
    if ((*(byte *)(param_1 + 0x5c) & 7) - 1 < 2) {
      FUN_2c62bea8(*(undefined4 *)(param_1 + 0x58));
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xf8 | 3;
    goto LAB_2c518f4e;
  }
  FUN_2c612838(param_2,&uStack_24);
  if (iVar3 == 0) {
    if ((*(byte *)(param_1 + 0x5c) & 7) - 1 < 2) {
      FUN_2c62bea8(*(undefined4 *)(param_1 + 0x58));
    }
    uVar7 = (ushort)((uStack_24 & 0x1fffff) >> 10);
    *(undefined4 *)(param_1 + 0x58) = param_2;
    uVar8 = uStack_24._2_2_ >> 5;
  }
  else {
    if ((iVar3 - 1U & 0xff) < 2) {
      if ((*(byte *)(param_1 + 0x5c) & 7) - 1 < 2) {
        iVar4 = FUN_2c66c4ec(param_2);
        iVar9 = *(int *)(param_1 + 0x58);
        iVar4 = lv_mem_alloc(iVar4 + 1);
        if (iVar4 == 0) goto LAB_2c518f4e;
        FUN_2c6435c4(iVar4,param_2);
        *(int *)(param_1 + 0x58) = iVar4;
        if (iVar9 != 0) {
          FUN_2c62bea8(iVar9);
        }
      }
      else {
        iVar4 = FUN_2c66c4ec(param_2);
        iVar4 = lv_mem_alloc(iVar4 + 1);
        if (iVar4 == 0) goto LAB_2c518f4e;
        FUN_2c6435c4(iVar4,param_2);
        *(int *)(param_1 + 0x58) = iVar4;
      }
    }
    if (iVar3 == 2) {
      uVar5 = FUN_2c6033b4(param_1,0,0x57);
      sVar1 = FUN_2c6033b4(param_1,0,0x58);
      sVar2 = FUN_2c6033b4(param_1,0,0x59);
      FUN_2c62b954(&uStack_20,param_2,uVar5,(int)sVar1,(int)sVar2,0x1fff,0);
      uVar7 = uStack_20 & 0x7ff;
      uVar6 = uStack_24 & 0xffe003ff | (uStack_20 & 0x7ff) << 10;
      uVar8 = uStack_1e & 0x7ff;
      uStack_24 = CONCAT22((ushort)(uVar6 >> 0x10) & 0x1f | uStack_1e << 5,(short)uVar6);
    }
    else {
      uVar7 = (ushort)((uStack_24 & 0x1fffff) >> 10);
      uVar8 = uStack_24._2_2_ >> 5;
    }
  }
  *(ushort *)(param_1 + 0x56) = uVar8;
  *(ushort *)(param_1 + 0x54) = uVar7;
  *(byte *)(param_1 + 0x5c) = (byte)iVar3 & 7 | (byte)((uStack_24 & 0x1f) << 3);
  FUN_2c607588(param_1);
  FUN_2c607df0(param_1);
LAB_2c518f4e:
  if (*_LAB_2c519070 == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

