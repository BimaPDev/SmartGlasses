/* FUN_2c49104c @ 0x2c49104c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c49104c(undefined1 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined1 *)FUN_2c4728e8(2,0xc);
  puVar3 = _LAB_2c491070;
  *puVar2 = param_1;
  *(undefined4 *)(puVar2 + 4) = param_2;
  puVar2[8] = param_3;
  puVar3 = (undefined4 *)*puVar3;
  if ((puVar3 != (undefined4 *)0x0) && (puVar2 != (undefined1 *)0x0)) {
    if ((code *)puVar3[4] == (code *)0x0) {
      puVar1 = (undefined4 *)FUN_2c6441f0(*DAT_2c485814);
      if (puVar1 == (undefined4 *)0x0) {
        FUN_2c485674();
        goto LAB_2c48580a;
      }
    }
    else {
      puVar1 = (undefined4 *)(*(code *)puVar3[4])(8);
      if (puVar1 == (undefined4 *)0x0) {
        return;
      }
    }
    *puVar1 = 0;
    puVar1[1] = puVar2;
    if ((undefined4 *)puVar3[1] == (undefined4 *)0x0) {
      *puVar3 = puVar1;
      puVar3[1] = puVar1;
    }
    else {
      *(undefined4 *)puVar3[1] = puVar1;
      puVar3[1] = puVar1;
    }
    puVar3[2] = puVar3[2] + 1;
    return;
  }
LAB_2c48580a:
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(DAT_2c48581c,DAT_2c485818);
}

