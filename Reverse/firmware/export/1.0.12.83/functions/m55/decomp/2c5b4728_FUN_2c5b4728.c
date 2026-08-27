/* FUN_2c5b4728 @ 0x2c5b4728 */

void FUN_2c5b4728(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_fpscr;
  double dVar6;
  undefined4 *local_34;
  int local_30;
  undefined4 local_2c [4];
  undefined4 local_1c;
  undefined4 uStack_18;
  int local_14;
  
  local_14 = *DAT_2c5b48a8;
  if (param_1 < 0xb) {
    uVar1 = registry_lookup(0x4019);
    uVar4 = FUN_2c66c4ec();
    FUN_2c5b4594(param_2,0,param_2[1],uVar1,uVar4);
    FUN_2c5b4594(param_3,0,*(undefined4 *)(param_3 + 4),DAT_2c5b48c8,0);
  }
  else {
    if (param_1 < 1000) {
      FUN_2c5dcca4(&local_34,param_1);
      puVar2 = (undefined4 *)*param_2;
      if (local_34 == local_2c) {
        if (local_30 != 0) {
          if (local_30 == 1) {
            *(undefined1 *)puVar2 = (undefined1)local_2c[0];
            puVar2 = (undefined4 *)*param_2;
          }
          else {
            FUN_2c674668(puVar2,local_2c);
            puVar2 = (undefined4 *)*param_2;
          }
        }
        param_2[1] = local_30;
        *(undefined1 *)((int)puVar2 + local_30) = 0;
      }
      else if (puVar2 == param_2 + 2) {
        *param_2 = local_34;
        param_2[1] = local_30;
        param_2[2] = local_2c[0];
        local_34 = local_2c;
      }
      else {
        *param_2 = local_34;
        param_2[1] = local_30;
        uVar1 = param_2[2];
        param_2[2] = local_2c[0];
        local_34 = local_2c;
        if (puVar2 != (undefined4 *)0x0) {
          local_34 = puVar2;
          local_2c[0] = uVar1;
        }
      }
      local_30 = 0;
      *(undefined1 *)local_34 = 0;
      if (local_34 != local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680();
      }
      uVar4 = 1;
      uVar1 = DAT_2c5b48ac;
    }
    else {
      iVar5 = ((int)((longlong)DAT_2c5b48b0 * (longlong)param_1 >> 0x25) - (param_1 >> 0x1f)) * 100;
      local_1c = 0;
      uStack_18 = 0;
      if (param_4 <= iVar5) {
        iVar5 = param_4;
      }
      FUN_2c62c3b0(&local_1c,8);
      uVar3 = DAT_2c5b48b4 * iVar5 + DAT_2c5b48b8;
      if (DAT_2c5b48bc < (uVar3 >> 3 | uVar3 * 0x20000000)) {
        dVar6 = (double)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
        FUN_2c62dbd4(&local_1c,7,DAT_2c5b48c0,uVar3,dVar6 / DAT_2c5b48a0);
      }
      else {
        FUN_2c62dbd4(&local_1c,7,DAT_2c5b48d0,
                     (int)((longlong)DAT_2c5b48cc * (longlong)iVar5 >> 0x26) - (iVar5 >> 0x1f));
      }
      uVar4 = 2;
      uVar1 = FUN_2c66c4ec(&local_1c);
      FUN_2c5b4594(param_2,0,param_2[1],&local_1c,uVar1);
      uVar1 = DAT_2c5b48c4;
    }
    FUN_2c5b4594(param_3,0,*(undefined4 *)(param_3 + 4),uVar1,uVar4);
  }
  if (*DAT_2c5b48a8 != local_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

