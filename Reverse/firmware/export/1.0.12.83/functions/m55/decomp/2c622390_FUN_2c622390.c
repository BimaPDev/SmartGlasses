/* FUN_2c622390 @ 0x2c622390 */

undefined4 FUN_2c622390(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  iVar2 = FUN_2c62be98(0x40,0x80,param_3,param_4,param_4);
  if (iVar2 != 0) {
    puVar5 = (undefined4 *)(iVar2 + -4);
    do {
      puVar5 = puVar5 + 1;
      *puVar5 = 5;
    } while (puVar5 != (undefined4 *)(iVar2 + 0x7c));
    iVar3 = FUN_2c62be98(0x40,0x80,5,puVar5,param_4);
    *(int *)(param_1 + 4) = iVar3;
    if (iVar3 == 0) {
      uVar4 = 0x53;
    }
    else {
      puVar5 = (undefined4 *)(iVar2 + -4);
      while( true ) {
        puVar1 = puVar5 + 1;
        *(undefined4 *)((int)puVar5 + iVar3 + (4 - iVar2)) = *puVar1;
        if (puVar1 == (undefined4 *)(iVar2 + 0x7c)) break;
        iVar3 = *(int *)(param_1 + 4);
        puVar5 = puVar1;
      }
      *(undefined4 *)(param_1 + 8) = 0xf;
      *(undefined4 *)(param_1 + 0xc) = 0x20;
      uVar4 = FUN_2c621970(param_1);
    }
    FUN_2c62bea8(iVar2);
    return uVar4;
  }
  return 0x53;
}

