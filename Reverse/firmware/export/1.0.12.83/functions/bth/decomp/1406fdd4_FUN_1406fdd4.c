/* FUN_1406fdd4 @ 0x1406fdd4 */

int FUN_1406fdd4(undefined4 param_1,undefined2 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int local_20;
  int local_1c;
  
  local_1c = *DAT_1406fe68;
  puVar2 = (undefined4 *)FUN_140709d0(param_1,param_3,param_3,0);
  if ((puVar2 == (undefined4 *)0x0) || ((*(ushort *)((int)puVar2 + 0x12) & 0x81) != 1)) {
    iVar4 = 0x43;
  }
  else {
    FUN_1407152c(param_1,param_3,0);
    iVar4 = FUN_1406e284(param_1,0,3,DAT_1406fe6c,0x1c,&local_20);
    if (iVar4 == 0) {
      *(undefined2 *)(local_20 + 0x14) = param_2;
      uVar3 = *puVar2;
      *(char *)(local_20 + 0x16) = (char)param_3;
      *(undefined4 *)(local_20 + 0x10) = uVar3;
      *(undefined1 *)(local_20 + 0x17) = 0xa6;
      *(char *)(local_20 + 0x18) = (char)*(undefined2 *)(puVar2 + 5);
      uVar1 = *(undefined2 *)((int)puVar2 + 0x16);
      *(undefined1 *)(local_20 + 0x1a) = 0;
      *(char *)(local_20 + 0x19) = (char)uVar1;
      FUN_1406e3c0(param_1);
    }
  }
  if (*DAT_1406fe68 == local_1c) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

