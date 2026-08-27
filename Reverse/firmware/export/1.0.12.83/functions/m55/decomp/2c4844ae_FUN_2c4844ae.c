/* FUN_2c4844ae @ 0x2c4844ae */

undefined4 FUN_2c4844ae(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = param_1;
  do {
    uVar1 = FUN_2c66b19c();
    puVar3 = puVar2 + 1;
    *puVar2 = uVar1;
    puVar2 = puVar3;
  } while (puVar3 != param_1 + param_2);
  return 1;
}

