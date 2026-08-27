/* FUN_14058a68 @ 0x14058a68 */

undefined4 FUN_14058a68(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  
  puVar3 = (undefined2 *)FUN_1406db30(0xfc13,4);
  if (puVar3 != (undefined2 *)0x0) {
    uVar2 = FUN_1405c2b0(param_1);
    *puVar3 = uVar2;
    uVar1 = DAT_14058aa0;
    puVar3[1] = *(undefined2 *)(param_2 + 0x18);
    FUN_1406da30(puVar3,param_1 << 8 | 1,uVar1);
    return 0;
  }
  return 0x4b;
}

