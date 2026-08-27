/* FUN_2c5f0dd8 @ 0x2c5f0dd8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5f0dd8(undefined4 param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  iStack_1c = *_LAB_2c5f0f1c;
  if (param_2 != 0) {
    FUN_2c6070bc(param_1,0x2064,param_3,0);
    FUN_2c608c7c(param_1);
    iVar2 = FUN_2c5f110c(param_1);
    iVar3 = FUN_2c5f056c(param_1);
    uVar4 = FUN_2c66c4ec(param_2);
    iVar3 = (int)(short)((short)iVar2 - ((short)iVar3 - (short)(iVar3 / iVar2) * (short)iVar2));
    uVar5 = FUN_2c5e2e58(_LAB_2c5f0f20);
    iVar2 = FUN_2c62b85c(param_2,uVar4,uVar5,0,0);
    if (iVar2 <= iVar3) {
      iVar3 = FUN_2c637344(param_1);
      lv_obj_add_flag_invalidate(iVar3,1);
      FUN_2c6070bc(iVar3,iVar2);
      FUN_2c606e20(iVar3,0xff00ff00,0);
      if (*_LAB_2c5f0f1c != iStack_1c) goto LAB_2c5f0f18;
      FUN_2c607df0();
      if (param_2 == 0) {
        param_2 = *(int *)(iVar3 + 0x24);
LAB_2c638786:
        if (-1 < (int)((uint)*(byte *)(iVar3 + 0x52) << 0x1c)) {
          iVar2 = FUN_2c66c4ec(param_2);
          iVar2 = FUN_2c62bebc(param_2,iVar2 + 1);
          *(int *)(iVar3 + 0x24) = iVar2;
          if (iVar2 == 0) {
            return;
          }
          goto LAB_2c63877a;
        }
      }
      else {
        if (*(int *)(iVar3 + 0x24) == param_2) goto LAB_2c638786;
        if ((*(int *)(iVar3 + 0x24) != 0) && (bVar1 = *(byte *)(iVar3 + 0x52), (bVar1 & 8) == 0)) {
          FUN_2c62bea8();
          *(uint *)(iVar3 + 0x24) = bVar1 & 8;
        }
      }
      iVar2 = FUN_2c66c4ec(param_2);
      iVar2 = lv_mem_alloc(iVar2 + 1);
      *(int *)(iVar3 + 0x24) = iVar2;
      if (iVar2 != 0) {
        FUN_2c6435c4(iVar2,param_2);
        *(byte *)(iVar3 + 0x52) = *(byte *)(iVar3 + 0x52) & 0xf7;
        if (*(int *)(iVar3 + 0x24) != 0) {
LAB_2c63877a:
          FUN_2c637b3c(iVar3);
          return;
        }
      }
      return;
    }
    iVar2 = FUN_2c5f05e8(param_2,iVar3);
    uStack_24 = FUN_2c62c45c(iVar2 + 1);
    iVar6 = FUN_2c66c4ec(param_2);
    uStack_20 = FUN_2c62c45c((iVar6 + 1) - iVar2);
    iVar2 = FUN_2c5f05b4(param_2,iVar2,&uStack_24,&uStack_20);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c5f0f2c,0x58,_LAB_2c5f0f28,_LAB_2c5f0f24);
    }
    uVar4 = FUN_2c637344(param_1);
    lv_obj_add_flag_invalidate(uVar4,1);
    FUN_2c6070bc(uVar4,iVar3);
    FUN_2c606e20(uVar4,0xff00ff00,0);
    FUN_2c638730(uVar4,uStack_24);
    FUN_2c608c7c(uVar4);
    FUN_2c62bea8(uStack_24);
    FUN_2c5f0dd8(param_1,uStack_20);
    FUN_2c62bea8(uStack_20);
  }
  if (*_LAB_2c5f0f1c == iStack_1c) {
    return;
  }
LAB_2c5f0f18:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

