/* FUN_100f9cf4 @ 0x100f9cf4 */

undefined4 FUN_100f9cf4(int param_1,int param_2,undefined1 *param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if ((param_3 == (undefined1 *)0x0) || (param_4 == 0)) {
    return 6;
  }
  *param_3 = 0;
  if (*(int *)(param_1 + 0x10) <= param_2) {
    return 0x10;
  }
  if (*(int *)(param_1 + 8) << 0x16 < 0) {
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x80) + 0x28);
    if (puVar1 != (undefined4 *)0xfffffffe) {
      if (puVar1 == (undefined4 *)0x0) {
        pcVar3 = *(code **)(**(int **)(param_1 + 0x60) + 0x20);
        if (pcVar3 == (code *)0x0) {
          *(undefined4 *)(*(int *)(param_1 + 0x80) + 0x28) = 0xfffffffe;
          return 6;
        }
        puVar1 = (undefined4 *)(*pcVar3)(*(int **)(param_1 + 0x60),DAT_100f9d7c);
        if (puVar1 == (undefined4 *)0x0) {
          *(undefined4 *)(*(int *)(param_1 + 0x80) + 0x28) = 0xfffffffe;
          return 6;
        }
        *(undefined4 **)(*(int *)(param_1 + 0x80) + 0x28) = puVar1;
      }
      if ((code *)*puVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100f9d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)*puVar1)(param_1,param_2,param_3,param_4);
        return uVar2;
      }
    }
  }
  return 6;
}

