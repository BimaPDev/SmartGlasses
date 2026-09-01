/* FUN_101348cc @ 0x101348cc */

void FUN_101348cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined2 param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_2c [2];
  char local_2a;
  
  iVar2 = FUN_100ca440(param_1,auStack_2c);
  if (iVar2 < 0) {
    local_2a = '\0';
  }
  else if (local_2a == '\x01') {
    uVar3 = FUN_100c8098();
    goto LAB_101348f6;
  }
  uVar3 = FUN_100c8050();
LAB_101348f6:
  uVar1 = FUN_1011ea10();
  FUN_10134816(param_3,param_4,param_5,uVar3,uVar1);
  return;
}

