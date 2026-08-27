/* FUN_1406f968 @ 0x1406f968 */

void FUN_1406f968(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int local_20;
  int local_1c;
  
  local_1c = *DAT_1406f9e8;
  puVar2 = (undefined4 *)FUN_140709d0();
  if ((puVar2 != (undefined4 *)0x0) && ((int)((uint)*(ushort *)((int)puVar2 + 0x12) << 0x1f) < 0)) {
    FUN_1407152c(param_1,param_2,0);
    iVar3 = FUN_1406e284(param_1,0,3,DAT_1406f9ec,0x1c,&local_20);
    if (iVar3 == 0) {
      *(undefined2 *)(local_20 + 0x14) = 0;
      uVar4 = *puVar2;
      *(char *)(local_20 + 0x16) = (char)param_2;
      *(undefined4 *)(local_20 + 0x10) = uVar4;
      *(undefined1 *)(local_20 + 0x17) = param_3;
      *(char *)(local_20 + 0x18) = (char)*(undefined2 *)(puVar2 + 5);
      uVar1 = *(undefined2 *)((int)puVar2 + 0x16);
      *(undefined1 *)(local_20 + 0x1a) = 1;
      *(char *)(local_20 + 0x19) = (char)uVar1;
      FUN_1406e3c0(param_1);
    }
  }
  if (*DAT_1406f9e8 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

