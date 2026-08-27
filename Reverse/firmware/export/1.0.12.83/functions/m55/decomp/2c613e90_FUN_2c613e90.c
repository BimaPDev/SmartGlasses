/* FUN_2c613e90 @ 0x2c613e90 */

undefined4 FUN_2c613e90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  puVar3 = (undefined4 *)*DAT_2c613ee0;
  if (puVar3 != (undefined4 *)0x0) {
    bVar1 = false;
    piVar4 = DAT_2c613ee0;
    do {
      iVar2 = (*(code *)*puVar3)(param_1,param_2,param_3,param_4,puVar3);
      if (iVar2 == 0) {
        return 0;
      }
      piVar4 = piVar4 + 2;
      puVar3 = (undefined4 *)*piVar4;
      if (iVar2 == 2) {
        bVar1 = true;
      }
    } while (puVar3 != (undefined4 *)0x0);
    if (bVar1) {
      return 2;
    }
  }
  return 1;
}

