/* FUN_1008ca98 @ 0x1008ca98 */

undefined4 FUN_1008ca98(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  bVar1 = false;
  piVar5 = DAT_1008cad8;
  uVar2 = param_2;
  while( true ) {
    puVar4 = (undefined4 *)*piVar5;
    if (puVar4 == (undefined4 *)0x0) {
      if (bVar1) {
        uVar2 = 2;
      }
      else {
        uVar2 = 1;
      }
      return uVar2;
    }
    iVar3 = (*(code *)*puVar4)(param_1,param_2,param_3,param_4,puVar4,uVar2);
    if (iVar3 == 0) break;
    if (iVar3 == 2) {
      bVar1 = true;
    }
    piVar5 = piVar5 + 2;
  }
  return 0;
}

