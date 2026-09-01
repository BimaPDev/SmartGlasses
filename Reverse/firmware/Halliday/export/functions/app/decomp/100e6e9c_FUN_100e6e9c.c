/* FUN_100e6e9c @ 0x100e6e9c */

void FUN_100e6e9c(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  
  FUN_100e6c2c(0xffffffff,0xffffffff);
  puVar1 = (undefined1 *)FUN_100e6bc4(param_1);
  if ((puVar1 == (undefined1 *)0x0) || (*(int *)(puVar1 + 0x14) == 0)) {
    FUN_100a5b78(((int)PTR_DAT_100e6f00 - (int)PTR_DAT_100e6efc) * 0x20 & 0xff00U | 0xf30012,
                 PTR_s_Can_t_find_server_for_dlci__p__s_100e6f04,param_1,puVar1);
  }
  else if ((*DAT_100e6f08 != 0) && (pcVar2 = *(code **)(*DAT_100e6f08 + 0xc), pcVar2 != (code *)0x0)
          ) {
    (*pcVar2)(*(int *)(puVar1 + 0x14),*puVar1,*(undefined4 *)(param_2 + 8),
              *(undefined2 *)(param_2 + 0xc));
  }
  FUN_100e6c20();
  return;
}

