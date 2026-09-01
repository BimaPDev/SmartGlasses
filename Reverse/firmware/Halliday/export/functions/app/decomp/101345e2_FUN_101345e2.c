/* FUN_101345e2 @ 0x101345e2 */

undefined4 FUN_101345e2(int param_1,undefined4 param_2,int param_3)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)FUN_100c1fe4(param_1 + 8,4);
  *puVar1 = *(undefined2 *)(param_3 + 8);
  puVar1[1] = *(undefined2 *)(param_3 + 0xe);
  return 0;
}

