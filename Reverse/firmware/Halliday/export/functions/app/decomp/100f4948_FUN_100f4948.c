/* FUN_100f4948 @ 0x100f4948 */

void FUN_100f4948(undefined2 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = DAT_100f495c;
  puVar2 = *(undefined4 **)(DAT_100f495c + 2);
  *DAT_100f495c = param_1;
  puVar1[1] = param_2;
  if (puVar2 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100f4956. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(*(undefined4 *)(puVar1 + 4));
    return;
  }
  return;
}

