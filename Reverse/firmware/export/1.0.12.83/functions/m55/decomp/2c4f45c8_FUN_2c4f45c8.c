/* FUN_2c4f45c8 @ 0x2c4f45c8 */

void FUN_2c4f45c8(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 local_70;
  uint local_6c;
  int local_68;
  undefined1 auStack_64 [32];
  undefined4 local_44;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 auStack_3c [20];
  uint local_28;
  uint local_1c;
  
  local_1c = *DAT_2c4f4700;
  local_70 = param_2;
  uVar3 = FUN_2c4f3d9c();
  if ((int)uVar3 == 0) {
    uVar3 = FUN_2c4f278c(param_1,auStack_64,&local_70,0);
    uVar2 = (uint)uVar3;
    if (-1 < (int)uVar2) {
      uVar1 = (uVar2 & 0xfffff) >> 10;
      if (uVar1 == 0x3ff) {
        uVar3 = CONCAT44((int)((ulonglong)uVar3 >> 0x20),0xffffffea);
      }
      else {
        local_44 = *(undefined4 *)(param_1 + 0x28);
        if (uVar2 >> 0x14 == 2) {
          uVar3 = FUN_2c4f221c(param_1,auStack_64,DAT_2c4f470c,DAT_2c4f4708 | uVar1 << 10,0,
                               &local_6c,8);
          if ((int)uVar3 < 0) goto LAB_2c4f45e0;
          uVar3 = FUN_2c4f1b28(param_1,auStack_3c,&local_6c,0xffffffff,0xffffffff,0,0,0);
          uVar2 = DAT_2c4f4704;
          if ((int)uVar3 != 0) goto LAB_2c4f45e0;
          if ((local_28 & 0xff00ffff) != 0) {
            uVar3 = CONCAT44((int)((ulonglong)uVar3 >> 0x20),0xffffffd9);
            goto LAB_2c4f45e0;
          }
          local_3e = 0;
          *(undefined4 **)(param_1 + 0x28) = &local_44;
          local_6c = uVar2 | uVar1 << 10;
          uVar2 = *(int *)(param_1 + 0x30) + 1;
          local_40 = 0;
          *(uint *)(param_1 + 0x30) = uVar2 & 0x7fffffff | (uint)((uVar2 & 0x3ff) != 0) << 0x1f;
          local_68 = (int)uVar3;
          uVar3 = FUN_2c4f384c(param_1,auStack_64,&local_6c,1);
          if ((int)uVar3 == 0) {
            uVar2 = *(int *)(param_1 + 0x30) - 1;
            *(undefined4 *)(param_1 + 0x28) = local_44;
            *(uint *)(param_1 + 0x30) = uVar2 & 0x7fffffff | (uint)((uVar2 & 0x3ff) != 0) << 0x1f;
            uVar3 = FUN_2c4f219c(param_1,auStack_3c,auStack_64);
            if ((int)uVar3 == 0) {
              uVar3 = FUN_2c4f3c8c(param_1,auStack_64,auStack_3c);
            }
            goto LAB_2c4f45e0;
          }
        }
        else {
          local_6c = DAT_2c4f4704 | uVar1 << 10;
          local_68 = 0;
          uVar3 = FUN_2c4f384c(param_1,auStack_64,&local_6c,1);
        }
        *(undefined4 *)(param_1 + 0x28) = local_44;
      }
    }
  }
LAB_2c4f45e0:
  if ((*DAT_2c4f4700 ^ local_1c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),*DAT_2c4f4700 ^ local_1c,0);
}

