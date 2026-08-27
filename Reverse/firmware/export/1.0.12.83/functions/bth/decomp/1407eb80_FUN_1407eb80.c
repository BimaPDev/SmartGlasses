/* FUN_1407eb80 @ 0x1407eb80 */

undefined1 * FUN_1407eb80(undefined4 param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = (undefined1 *)(*(code *)*DAT_1407ebe0)();
  iVar2 = FUN_140db784(puVar1,param_2,6);
  if (iVar2 == 0) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x4d,DAT_1407ebe4,param_1,puVar1[5],puVar1[4],puVar1[3],puVar1[2],puVar1[1],*puVar1,
               param_2[5],param_2[4],param_2[3],param_2[2],param_2[1],*param_2);
}

