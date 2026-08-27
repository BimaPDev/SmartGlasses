/* FUN_2c5bf078 @ 0x2c5bf078 */

int * FUN_2c5bf078(int *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 *puVar6;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (int)(param_1 + 2);
  puVar7 = (undefined1 *)*param_2 + param_2[1];
  puVar6 = (undefined1 *)*param_2;
  do {
    if (puVar7 == puVar6) {
      return param_1;
    }
    while( true ) {
      puVar5 = puVar6 + 1;
      uVar1 = *puVar6;
      iVar2 = func_0x2c6690e4(uVar1);
      puVar6 = puVar5;
      if (iVar2 != 0) break;
      piVar4 = (int *)*param_1;
      iVar2 = param_1[1];
      uVar8 = iVar2 + 1;
      if (param_1 + 2 == piVar4) {
        uVar3 = 0xf;
      }
      else {
        uVar3 = param_1[2];
      }
      if (uVar3 < uVar8) {
        FUN_2c52263c(param_1,iVar2,0,0,1);
        piVar4 = (int *)*param_1;
      }
      *(undefined1 *)((int)piVar4 + iVar2) = uVar1;
      param_1[1] = uVar8;
      *(undefined1 *)(*param_1 + uVar8) = 0;
      if (puVar7 == puVar5) {
        return param_1;
      }
    }
  } while( true );
}

