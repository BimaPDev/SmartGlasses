/* FUN_2c4857c8 @ 0x2c4857c8 */

void FUN_2c4857c8(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
    if ((code *)param_1[4] == (code *)0x0) {
      puVar1 = (undefined4 *)FUN_2c6441f0(*DAT_2c485814);
      if (puVar1 == (undefined4 *)0x0) {
        FUN_2c485674();
        goto LAB_2c48580a;
      }
    }
    else {
      puVar1 = (undefined4 *)(*(code *)param_1[4])(8);
      if (puVar1 == (undefined4 *)0x0) {
        return;
      }
    }
    *puVar1 = 0;
    puVar1[1] = param_2;
    if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
      *param_1 = puVar1;
      param_1[1] = puVar1;
    }
    else {
      *(undefined4 *)param_1[1] = puVar1;
      param_1[1] = puVar1;
    }
    param_1[2] = param_1[2] + 1;
    return;
  }
LAB_2c48580a:
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(DAT_2c48581c,DAT_2c485818);
}

