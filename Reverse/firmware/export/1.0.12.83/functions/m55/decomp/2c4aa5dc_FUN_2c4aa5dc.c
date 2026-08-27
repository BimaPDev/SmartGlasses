/* FUN_2c4aa5dc @ 0x2c4aa5dc */

void FUN_2c4aa5dc(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ushort local_16;
  int local_14;
  
  local_14 = *DAT_2c4aa738;
  if ((param_2 != 0) || (*(char *)(param_1 + 0x304) == -1)) {
    local_16 = 0;
    if (*(char *)(param_1 + 0xac) != '\0') {
      iVar4 = *(int *)(param_1 + 0xa4);
      if (iVar4 == 0) {
        (**(code **)(param_1 + 0x350))(param_1,*(undefined2 *)(param_1 + 0x19c));
      }
      else {
        (**(code **)(param_1 + 0x354))(param_1,&local_16);
        uVar2 = (uint)local_16;
        uVar1 = *(uint *)(param_1 + 0x19c);
        if ((int)uVar2 <= (int)uVar1) {
          do {
            uVar1 = uVar2 & 0xffff;
            uVar2 = uVar2 + iVar4;
            (**(code **)(param_1 + 0x350))(param_1,uVar1);
            FUN_2c6444fc(1);
            uVar1 = *(uint *)(param_1 + 0x19c);
          } while ((int)uVar2 <= (int)uVar1);
        }
        (**(code **)(param_1 + 0x350))(param_1,uVar1 & 0xffff);
        FUN_2c6444fc(1);
      }
    }
    if (*DAT_2c4aa738 == local_14) {
                    /* WARNING: Could not recover jumptable at 0x2c4aa6e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x340))
                (param_1,*(undefined1 *)(param_1 + 0xf0),*(undefined2 *)(param_1 + 0xf4),
                 *(undefined2 *)(param_1 + 0xf8));
      return;
    }
    goto LAB_2c4aa732;
  }
  (**(code **)(param_1 + 0x340))
            (param_1,*(undefined1 *)(param_1 + 0xf0),*(undefined2 *)(param_1 + 0xf4),
             *(undefined2 *)(param_1 + 0xfc));
  if (*(char *)(param_1 + 0xac) != '\0') {
    iVar4 = *(int *)(param_1 + 0xa4);
    if (iVar4 == 0) {
      if (*DAT_2c4aa738 == local_14) {
                    /* WARNING: Could not recover jumptable at 0x2c4aa71e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1 + 0x350))
                  (param_1,*(int *)(param_1 + 0x1a0) + *(int *)(param_1 + 0x198) & 0xffff);
        return;
      }
      goto LAB_2c4aa732;
    }
    uVar2 = *(uint *)(param_1 + 0x198);
    uVar3 = *(uint *)(param_1 + 0x19c);
    uVar1 = *(int *)(param_1 + 0x1a0) + uVar2;
    if ((int)uVar1 <= (int)uVar3) {
      do {
        uVar1 = uVar3 & 0xffff;
        uVar3 = uVar3 - iVar4;
        (**(code **)(param_1 + 0x350))(param_1,uVar1);
        FUN_2c6444fc(1);
        uVar2 = *(uint *)(param_1 + 0x198);
        uVar1 = *(int *)(param_1 + 0x1a0) + uVar2;
      } while ((int)uVar1 <= (int)uVar3);
    }
    if (uVar2 != uVar3) {
      if (*DAT_2c4aa738 == local_14) {
                    /* WARNING: Could not recover jumptable at 0x2c4aa66a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1 + 0x350))(param_1,uVar1 & 0xffff);
        return;
      }
      goto LAB_2c4aa732;
    }
  }
  if (*DAT_2c4aa738 == local_14) {
    return;
  }
LAB_2c4aa732:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

