/* FUN_2c4f2ab8 @ 0x2c4f2ab8 */

int FUN_2c4f2ab8(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uStack_31;
  undefined4 local_30;
  int local_2c;
  
  local_2c = *DAT_2c4f2bf4;
  iVar1 = FUN_2c4f25f0(param_1,&local_30,param_3,0);
joined_r0x2c4f2ad6:
  if (iVar1 == 0) {
    iVar2 = (**(code **)(*(int *)(param_1 + 0x68) + 0xc))(*(int *)(param_1 + 0x68),local_30);
    if (iVar2 == 0) {
      uVar3 = *(uint *)(param_2 + 0x3c);
      if (uVar3 != 0) {
        uVar4 = 0;
        do {
          if (*(int *)(param_2 + 0x30) << 0xb < 0) {
            if (*(uint *)(*(int *)(param_1 + 0x68) + 0x1c) < uVar4 + 1) goto LAB_2c4f2bea;
            iVar1 = FUN_2c4f29f8(param_1,param_2 + 8,param_2 + 0x40,uVar3 - uVar4,
                                 DAT_2c4f2bf8 | (uint)*(ushort *)(param_2 + 4) << 10,uVar4,
                                 &uStack_31,1);
          }
          else {
            if ((*(uint *)(*(int *)(param_1 + 0x68) + 0x20) <= *(uint *)(param_2 + 0x38)) ||
               (*(uint *)(*(int *)(param_1 + 0x68) + 0x1c) < uVar4 + 1)) {
LAB_2c4f2bea:
              iVar1 = -0x54;
              goto LAB_2c4f2afe;
            }
            iVar1 = FUN_2c4f0eb4(param_1,param_2 + 0x40,param_1,uVar3 - uVar4,
                                 *(uint *)(param_2 + 0x38),uVar4,&uStack_31,1);
          }
          if (iVar1 != 0) goto LAB_2c4f2afe;
          uVar5 = uVar4 + 1;
          iVar1 = FUN_2c4f1298(param_1,param_1 + 0x10,param_1,1,local_30,uVar4,&uStack_31,1);
          if (iVar1 != 0) goto LAB_2c4f2be0;
          uVar3 = *(uint *)(param_2 + 0x3c);
          uVar4 = uVar5;
          if (uVar3 <= uVar5) break;
        } while( true );
      }
      FUN_2c674668(*(undefined4 *)(param_2 + 0x4c),*(undefined4 *)(param_1 + 0x1c),
                   *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x28));
      *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_1 + 0x18);
      FUN_2c674268(*(undefined4 *)(param_1 + 0x1c),0xff,
                   *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x28));
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      *(undefined4 *)(param_2 + 0x38) = local_30;
      *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 0x20000;
      iVar1 = iVar2;
    }
    else {
      iVar1 = iVar2;
      if (iVar2 == -0x54) goto LAB_2c4f2aea;
    }
  }
  goto LAB_2c4f2afe;
LAB_2c4f2be0:
  if (iVar1 != -0x54) {
LAB_2c4f2afe:
    if (*DAT_2c4f2bf4 != local_2c) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return iVar1;
  }
LAB_2c4f2aea:
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  iVar1 = FUN_2c4f25f0(param_1,&local_30);
  goto joined_r0x2c4f2ad6;
}

