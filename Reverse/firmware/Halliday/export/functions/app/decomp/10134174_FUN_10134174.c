/* FUN_10134174 @ 0x10134174 */

undefined4
FUN_10134174(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_100cb508();
  *(char *)(param_1 + 0x12) = (char)uVar1;
  iVar2 = FUN_100cb5a8(0x14,uVar1,10);
  if (iVar2 == 0) {
    uVar1 = 0xfffffff4;
  }
  else {
    uVar4 = FUN_100c1fe4(iVar2 + 8,10);
    puVar3 = (undefined2 *)uVar4;
    *puVar3 = *(undefined2 *)((int)param_1 + 0x46);
    puVar3[1] = *(undefined2 *)(param_1 + 0x14);
    puVar3[2] = *(undefined2 *)((int)param_1 + 0x52);
    puVar3[3] = *(undefined2 *)(param_1 + 0x15);
    puVar3[4] = *(undefined2 *)((int)param_1 + 0x56);
    FUN_1013cbaa(param_1 + 4,(int)((ulonglong)uVar4 >> 0x20),40000,0,param_4);
    FUN_1013411a(*param_1,iVar2);
    uVar1 = 0;
  }
  return uVar1;
}

