/* FUN_140872b4 @ 0x140872b4 */

int FUN_140872b4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  
  iVar2 = FUN_1407772c(0x43d,0x3b,0,param_4,param_4);
  if (iVar2 != 0) {
    puVar3 = (undefined2 *)FUN_14075458(iVar2,0x3b);
    *puVar3 = *(undefined2 *)(param_1 + 0x1c);
    *(undefined1 *)(puVar3 + 1) = 0x40;
    *(undefined1 *)(puVar3 + 3) = 0x40;
    *(undefined1 *)((int)puVar3 + 3) = 0x1f;
    *(undefined1 *)((int)puVar3 + 7) = 0x1f;
    *(undefined1 *)(puVar3 + 2) = 0;
    *(undefined1 *)((int)puVar3 + 5) = 0;
    *(undefined1 *)(puVar3 + 4) = 0;
    *(undefined1 *)((int)puVar3 + 9) = 0;
    *(undefined1 *)(puVar3 + 5) = 0xff;
    *(undefined1 *)((int)puVar3 + 0xf) = 0xff;
    *(undefined1 *)((int)puVar3 + 0xb) = 0x75;
    *(undefined1 *)(puVar3 + 8) = 0x75;
    *(undefined1 *)(puVar3 + 6) = 0;
    *(undefined1 *)((int)puVar3 + 0xd) = 0x10;
    *(undefined1 *)(puVar3 + 7) = 0;
    *(undefined1 *)((int)puVar3 + 0x11) = 0;
    *(undefined1 *)(puVar3 + 9) = 0x10;
    *(undefined1 *)((int)puVar3 + 0x13) = 0;
    *(undefined1 *)(puVar3 + 10) = 0x3c;
    *(undefined1 *)(puVar3 + 0xb) = 0x3c;
    *(undefined1 *)((int)puVar3 + 0x15) = 0;
    *(undefined1 *)((int)puVar3 + 0x17) = 0;
    *(undefined1 *)(puVar3 + 0xc) = 0;
    *(undefined1 *)((int)puVar3 + 0x19) = 0x7d;
    *(undefined1 *)((int)puVar3 + 0x1d) = 0x7d;
    *(undefined1 *)(puVar3 + 0xd) = 0;
    *(undefined1 *)((int)puVar3 + 0x1b) = 0;
    *(undefined1 *)(puVar3 + 0xe) = 0;
    *(undefined1 *)(puVar3 + 0xf) = 0;
    *(undefined1 *)((int)puVar3 + 0x1f) = 0;
    *(undefined1 *)(puVar3 + 0x10) = 4;
    *(undefined1 *)((int)puVar3 + 0x25) = 4;
    *(undefined1 *)(puVar3 + 0x1b) = 0xf;
    *(undefined1 *)(puVar3 + 0x1c) = 0x88;
    *(undefined1 *)((int)puVar3 + 0x21) = 0;
    *(undefined1 *)((int)puVar3 + 0x39) = 3;
    *(undefined1 *)(puVar3 + 0x11) = 0;
    *(undefined1 *)((int)puVar3 + 0x23) = 0;
    *(undefined1 *)(puVar3 + 0x12) = 0;
    *(undefined1 *)(puVar3 + 0x13) = 0;
    *(undefined1 *)((int)puVar3 + 0x27) = 0;
    *(undefined1 *)(puVar3 + 0x14) = 0;
    *(undefined1 *)((int)puVar3 + 0x29) = 0;
    *(undefined1 *)(puVar3 + 0x15) = 0x10;
    *(undefined1 *)(puVar3 + 0x16) = 0x10;
    *(undefined1 *)((int)puVar3 + 0x2b) = 0;
    *(undefined1 *)((int)puVar3 + 0x2d) = 0;
    *(undefined1 *)(puVar3 + 0x17) = 2;
    *(undefined1 *)((int)puVar3 + 0x2f) = 2;
    *(undefined1 *)(puVar3 + 0x1d) = 2;
    *(undefined1 *)(puVar3 + 0x18) = 0;
    *(undefined1 *)((int)puVar3 + 0x31) = 0;
    *(undefined1 *)(puVar3 + 0x19) = 7;
    *(undefined1 *)((int)puVar3 + 0x33) = 7;
    *(undefined1 *)(puVar3 + 0x1a) = 0;
    *(undefined1 *)((int)puVar3 + 0x35) = 0;
    *(undefined1 *)((int)puVar3 + 0x37) = 0;
    cVar1 = FUN_1407780c(iVar2);
    return (int)cVar1;
  }
  return 1;
}

