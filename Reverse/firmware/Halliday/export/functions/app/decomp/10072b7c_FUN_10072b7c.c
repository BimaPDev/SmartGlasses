/* FUN_10072b7c @ 0x10072b7c */

undefined4 FUN_10072b7c(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 local_28;
  undefined4 local_24;
  char local_20;
  undefined1 local_1f;
  undefined2 local_1e;
  undefined4 local_1c;
  
  local_28 = DAT_10072bf8;
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  local_24 = 0x100ff;
  local_1c = 0;
  _local_20 = CONCAT22((short)uVar2,CONCAT11(0x10,*(char *)(param_1 + 0x2c) + '\x01'));
  uVar1 = FUN_1007296c((int)&local_24 + 2,10,0);
  local_24._0_2_ = CONCAT11(uVar1,(undefined1)local_24);
  FUN_10072af0(param_1,param_2,uVar2);
  FUN_10072a48(param_1,param_2,&local_28,0x10);
  *(int *)(param_1 + 0x24) = param_2;
  *(char *)(param_1 + 0x2c) = local_20;
  *(int *)(param_1 + 0x28) = param_2 + 0x10;
  FUN_1011f7be(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
  return 0;
}

