/* FUN_2c478772 @ 0x2c478772 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c478772(int param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = FUN_2c66b624(param_1 + 0x6b,_LAB_2c478798);
  if ((iVar3 != 0) || (*(char *)(param_1 + 0x3d) == '\x03')) {
    return;
  }
  *(undefined1 *)(param_1 + 0x3c) = 0;
  iVar3 = _LAB_2c483888;
  func_0x2c4855a8();
  FUN_2c674268(iVar3,0,0x2d);
  puVar2 = _LAB_2c483890;
  puVar1 = _LAB_2c48388c;
  *(undefined4 *)(iVar3 + 0x55) = 0;
  *(undefined4 *)(iVar3 + 0x59) = 0;
  *(undefined4 *)(iVar3 + 0x5d) = 0;
  *(undefined4 *)(iVar3 + 0x61) = 0;
  *(undefined4 *)(iVar3 + 0x65) = 0;
  *(undefined4 *)(iVar3 + 0x2d) = 0;
  *(undefined4 *)(iVar3 + 0x31) = 0;
  *(undefined4 *)(iVar3 + 0x35) = 0;
  *(undefined4 *)(iVar3 + 0x39) = 0;
  *(undefined4 *)(iVar3 + 0x3d) = 0;
  *(undefined4 *)(iVar3 + 0x41) = 0;
  *(undefined4 *)(iVar3 + 0x45) = 0;
  *(undefined4 *)(iVar3 + 0x49) = 0;
  *(undefined4 *)(iVar3 + 0x4d) = 0;
  *(undefined4 *)(iVar3 + 0x51) = 0;
  *(undefined4 *)(iVar3 + 0x6c) = 0;
  *puVar1 = 0;
  *(undefined2 *)(puVar1 + 1) = 0;
  *puVar2 = 0;
  if (*_LAB_2c485614 == 0) {
    return;
  }
  iVar3 = FUN_2c644080();
  if (iVar3 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0xfd,_LAB_2c485620,_LAB_2c48561c,_LAB_2c485618);
}

