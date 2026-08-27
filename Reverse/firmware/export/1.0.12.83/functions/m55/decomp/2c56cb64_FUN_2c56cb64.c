/* FUN_2c56cb64 @ 0x2c56cb64 */

undefined4 * FUN_2c56cb64(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint local_20;
  int local_1c;
  
  local_1c = *DAT_2c56cc38;
  switch(param_2) {
  case 0:
    puVar3 = (undefined1 *)registry_lookup(DAT_2c56cc40,param_2,param_3,0);
    *param_1 = param_1 + 2;
    goto joined_r0x2c56cb92;
  case 1:
    uVar2 = DAT_2c56cc48;
    break;
  case 2:
    uVar2 = DAT_2c56cc4c;
    break;
  case 3:
    uVar2 = DAT_2c56cc50;
    break;
  case 4:
    uVar2 = DAT_2c56cc54;
    break;
  case 5:
    uVar2 = DAT_2c56cc58;
    break;
  case 6:
    uVar2 = DAT_2c56cc5c;
    break;
  case 7:
    uVar2 = DAT_2c56cc3c;
    break;
  default:
    uVar1 = *(undefined1 *)(DAT_2c56cc60 + 1);
    *(undefined2 *)(param_1 + 2) = *DAT_2c56cc60;
    *param_1 = param_1 + 2;
    *(undefined1 *)((int)param_1 + 10) = uVar1;
    param_1[1] = 3;
    *(undefined1 *)((int)param_1 + 0xb) = 0;
    goto LAB_2c56cbb0;
  }
  puVar3 = (undefined1 *)registry_lookup(uVar2,param_2,param_3,0);
  *param_1 = param_1 + 2;
joined_r0x2c56cb92:
  if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c56cc44);
  }
  puVar5 = param_1 + 2;
  uVar4 = FUN_2c66c4ec();
  local_20 = uVar4;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(param_1 + 2) = *puVar3;
    }
    else if (uVar4 != 0) goto LAB_2c56cc0a;
  }
  else {
    puVar5 = (undefined4 *)FUN_2c56c9cc(&local_20,0);
    *param_1 = puVar5;
    param_1[2] = local_20;
LAB_2c56cc0a:
    FUN_2c674668(puVar5,puVar3,uVar4);
    puVar5 = (undefined4 *)*param_1;
  }
  param_1[1] = local_20;
  *(undefined1 *)((int)puVar5 + local_20) = 0;
LAB_2c56cbb0:
  if (*DAT_2c56cc38 == local_1c) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

