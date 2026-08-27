/* FUN_14032780 @ 0x14032780 */

undefined4 FUN_14032780(char *param_1)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  
  puVar2 = DAT_140327bc;
  if ((((*param_1 == '\x01') && (param_1[1] == -0x55)) && (param_1[2] == -4)) &&
     (param_1[3] == '\x03')) {
    uVar1 = *(undefined2 *)(param_1 + 4);
    *DAT_140327b8 = (ushort)(byte)param_1[6];
    *puVar2 = uVar1;
    return 1;
  }
  return 0;
}

