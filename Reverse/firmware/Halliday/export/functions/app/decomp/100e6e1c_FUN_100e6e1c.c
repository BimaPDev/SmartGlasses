/* FUN_100e6e1c @ 0x100e6e1c */

void FUN_100e6e1c(undefined4 param_1)

{
  ushort *puVar1;
  code *pcVar2;
  
  FUN_100e6c2c(0xffffffff,0xffffffff);
  puVar1 = (ushort *)FUN_100e6bc4(param_1);
  if ((puVar1 == (ushort *)0x0) || (*(int *)(puVar1 + 10) == 0)) {
    FUN_100a5b78(DAT_100e6e90 | (DAT_100e6e8c - DAT_100e6e88) * 0x20 & 0xff00U,DAT_100e6e94,param_1,
                 puVar1);
  }
  else {
    if ((*DAT_100e6e98 != 0) && (pcVar2 = *(code **)(*DAT_100e6e98 + 8), pcVar2 != (code *)0x0)) {
      (*pcVar2)(*(int *)(puVar1 + 10),(char)*puVar1);
    }
    if ((*(byte *)((int)puVar1 + 1) & 0x10) == 0) {
      *(uint *)(puVar1 + 10) = *(byte *)((int)puVar1 + 1) & 0x10;
    }
    else {
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      *puVar1 = *puVar1 & 0xe000;
    }
  }
  FUN_100e6c20();
  return;
}

