/* FUN_14062d94 @ 0x14062d94 */

undefined4 FUN_14062d94(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    puVar1 = (undefined4 *)FUN_1406db30(0x2014,5,param_3,param_4,param_4);
    if (puVar1 == (undefined4 *)0x0) {
      param_3 = 0x4b;
    }
    else {
      *puVar1 = *(undefined4 *)(param_1 + 0x10);
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_1 + 0x14);
      FUN_1406da30(puVar1,1,DAT_14062dd0);
      if (param_3 == 0) {
        return 0;
      }
    }
  }
  (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),param_3);
  return 1;
}

