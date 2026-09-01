/* FUN_1013be10 @ 0x1013be10 */

undefined4 FUN_1013be10(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (param_3 == 0) {
    uVar2 = 1;
  }
  else {
    puVar1 = (undefined4 *)FUN_100f0524(0x20);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_1011ea48(puVar1 + 2,0,0x18);
      *puVar1 = param_1;
      puVar1[1] = param_2;
      *(undefined1 *)(puVar1 + 2) = 0;
      *(undefined4 **)(param_3 + 0x2c) = puVar1;
      *(undefined4 **)(param_3 + 0x30) = puVar1;
      *(undefined4 *)(param_3 + 0x34) = 1;
      piVar3 = (int *)FUN_100f0524(0x14);
      if (piVar3 != (int *)0x0) {
        piVar3[3] = 0;
        piVar3[4] = 0;
        *piVar3 = (int)puVar1;
        piVar3[1] = (int)puVar1;
        piVar3[2] = 1;
        if (*(int *)(param_3 + 0x50) == 0) {
          *(int **)(param_3 + 0x4c) = piVar3;
          *(int **)(param_3 + 0x50) = piVar3;
          return 0;
        }
        *(int **)(*(int *)(param_3 + 0x50) + 0xc) = piVar3;
        *(int **)(param_3 + 0x50) = piVar3;
        return 0;
      }
    }
    uVar2 = 5;
  }
  return uVar2;
}

