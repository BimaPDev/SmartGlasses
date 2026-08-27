/* FUN_140a1e34 @ 0x140a1e34 */

undefined4 FUN_140a1e34(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_140a1e70;
  if (*DAT_140a1e68 == '\x01') {
    puVar2 = DAT_140a1e70 + -0x4b;
  }
  if ((*DAT_140a1e6c == '\0') || (param_1 == (undefined4 *)0x0)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
    *param_1 = *puVar2;
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)(puVar2 + 1);
  }
  return uVar1;
}

