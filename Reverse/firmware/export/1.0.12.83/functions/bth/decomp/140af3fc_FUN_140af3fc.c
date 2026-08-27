/* FUN_140af3fc @ 0x140af3fc */

void FUN_140af3fc(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_140af410;
  if (param_1 != (undefined4 *)0x0) {
    *DAT_140af410 = *param_1;
    uVar1 = *(undefined1 *)((int)param_1 + 6);
    *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(param_1 + 1);
    *(undefined1 *)((int)puVar2 + 6) = uVar1;
  }
  return;
}

