/* FUN_2c5dce38 @ 0x2c5dce38 */

undefined4 FUN_2c5dce38(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = (undefined4 *)*param_1;
  puVar5 = (undefined4 *)param_1[1];
  uVar2 = *DAT_2c5dceb0;
  do {
    if (puVar4 == puVar5) {
      if (puVar5 == (undefined4 *)param_1[2]) {
        param_2 = FUN_2c5dcd3c(param_1,puVar5);
        uVar3 = 1;
      }
      else {
        uVar3 = 1;
        *puVar5 = param_2;
        puVar5[1] = param_3;
        param_1[1] = param_1[1] + 8;
      }
LAB_2c5dce6c:
      if ((*DAT_2c5dceb0 ^ uVar2) == 0) {
        return uVar3;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail(param_2,*DAT_2c5dceb0 ^ uVar2,0);
    }
    iVar1 = FUN_2c66b624(param_2,*puVar4);
    if (iVar1 == 0) {
      param_2 = 0;
      uVar3 = 0;
      goto LAB_2c5dce6c;
    }
    puVar4 = puVar4 + 2;
  } while( true );
}

