/* FUN_1012d7a8 @ 0x1012d7a8 */

undefined4 FUN_1012d7a8(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 0x54);
  if (puVar3 == (undefined4 *)0x0) {
    uVar1 = 0xfffffff3;
  }
  else {
    if (param_2 == 0) {
      uVar1 = FUN_1012d4aa(*puVar3,param_3);
    }
    else {
      uVar1 = FUN_1012d2f0(*puVar3);
    }
    uVar2 = ((undefined4 *)*puVar3)[1];
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)*puVar3;
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  return uVar1;
}

