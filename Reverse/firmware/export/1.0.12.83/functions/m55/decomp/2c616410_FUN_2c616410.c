/* FUN_2c616410 @ 0x2c616410 */

void FUN_2c616410(int param_1,int param_2,uint param_3,int *param_4)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  uint uVar7;
  
  iVar3 = *param_4;
  if (iVar3 != 0) {
    uVar4 = (uint)*(ushort *)(param_1 + 0x82);
    if (*(short *)(param_2 + 0xc) == 0) {
      iVar3 = FUN_2c62bebc(iVar3,param_3 * 2,0,iVar3,param_4);
      *param_4 = iVar3;
      if (((uVar4 < param_3) && (iVar3 != 0)) && (uVar4 - 1 < param_3)) {
        iVar6 = (uVar4 - 1) * 2;
        while( true ) {
          *(undefined2 *)(iVar3 + iVar6) = 0x7fff;
          iVar6 = iVar6 + 2;
          if (param_3 * 2 - iVar6 == 0) break;
          iVar3 = *param_4;
        }
        return;
      }
    }
    else {
      iVar3 = lv_mem_alloc(param_3 * 2);
      if (iVar3 != 0) {
        if (param_3 < uVar4) {
          if (param_3 != 0) {
            puVar1 = (undefined2 *)(iVar3 + -2);
            uVar2 = 0;
            do {
              uVar7 = *(ushort *)(param_2 + 0xc) + uVar2;
              uVar2 = uVar2 + 1;
              puVar1 = puVar1 + 1;
              *puVar1 = *(undefined2 *)(*param_4 + (uVar7 - uVar4 * (uVar7 / uVar4)) * 2);
            } while (param_3 != uVar2);
            FUN_2c62bea8(*param_4);
            *param_4 = iVar3;
            return;
          }
        }
        else {
          if (uVar4 != 0) {
            puVar1 = (undefined2 *)(iVar3 + -2);
            uVar2 = 0;
            do {
              uVar7 = *(ushort *)(param_2 + 0xc) + uVar2;
              uVar2 = uVar2 + 1;
              puVar1 = puVar1 + 1;
              *puVar1 = *(undefined2 *)(*param_4 + (uVar7 - uVar4 * (uVar7 / uVar4)) * 2);
            } while (uVar4 != uVar2);
          }
          if (uVar4 < param_3) {
            puVar1 = (undefined2 *)(iVar3 + uVar4 * 2);
            do {
              puVar5 = puVar1 + 1;
              *puVar1 = 0x7fff;
              puVar1 = puVar5;
            } while (puVar5 != (undefined2 *)(param_3 * 2 + iVar3));
          }
        }
        FUN_2c62bea8(*param_4);
        *param_4 = iVar3;
      }
    }
  }
  return;
}

