{
  description = "A nix flake for DS programs";

  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs?ref=nixos-unstable";
  };

  outputs = { self, nixpkgs }:
  let
    pkgs = nixpkgs.legacyPackages.x86_64-linux;
  in
  {
    devShells.x86_64-linux = {

      default = pkgs.mkShell {
        name = "DS";
        packages = with pkgs; [
          libgcc
          clang-tools
        ];
      };

    };
  };
}
